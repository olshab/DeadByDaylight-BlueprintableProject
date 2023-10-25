#pragma once

#include "CoreMinimal.h"
#include "ESteamPipeState.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "SteamPipe.generated.h"

class UBoxComponent;
class UPrimitiveComponent;
class USteamPipeEffectComponent;

UCLASS(Blueprintable)
class DBDGAMEPLAY_API ASteamPipe : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _overlapVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SteamPipeState, meta=(AllowPrivateAccess=true))
	ESteamPipeState _currentSteamPipeState;

	UPROPERTY(EditAnywhere, Transient, Export)
	TArray<TWeakObjectPtr<USteamPipeEffectComponent>> _overlappingPlayerComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _debugResetTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _warningStateTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _activeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _warningStateTimeNoCharge;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SteamPipeState();

public:
	UFUNCTION(BlueprintPure)
	ESteamPipeState GetCurrentSteamPipeState() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSteamPipeStateChanged(ESteamPipeState newState);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASteamPipe();
};

FORCEINLINE uint32 GetTypeHash(const ASteamPipe) { return 0; }
