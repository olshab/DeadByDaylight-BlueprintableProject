#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "ECamperDamageState.h"
#include "EK35AreaBlastState.h"
#include "UObject/NoExportTypes.h"
#include "K35AreaBlast.generated.h"

class UCurveFloat;
class USceneComponent;
class USphereComponent;
class ACamperPlayer;

UCLASS(Blueprintable)
class AK35AreaBlast : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EK35AreaBlastState, FDBDTunableRowHandle> _stateDurationMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EK35AreaBlastState, EK35AreaBlastState> _nextStateMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _growCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _shrinkCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USphereComponent* _playerCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USceneComponent* _offsetComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _minScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maxScale;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _affectedSurvivors;

private:
	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SurvivorDamagedByAreaBlast(ACamperPlayer* survivor, ECamperDamageState targetHealthState);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SurvivorAfflictedWithKillerEffectByAreaBlast(ACamperPlayer* survivor, ECamperDamageState currentHealthState);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_Spawn(const FVector& spawnLocation);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ToggleAreaBlastDebugSphere();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorDamagedByAreaBlast(ACamperPlayer* survivor, ECamperDamageState targetHealthState, bool isAnySurvivorAlreadyHit);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorAfflictedWithKillerEffectByAreaBlast(ACamperPlayer* survivor, ECamperDamageState currentHealthState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStateChanged(EK35AreaBlastState newState);

public:
	AK35AreaBlast();
};

FORCEINLINE uint32 GetTypeHash(const AK35AreaBlast) { return 0; }
