#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "UObject/SoftObjectPtr.h"
#include "Templates/SubclassOf.h"
#include "ELeanState.h"
#include "GhostStalkPowerComponent.generated.h"

class UStalkerComponent;
class UStatusEffect;
class UGhostStalkedComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEGHOSTFACE_API UGhostStalkPowerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UStalkerComponent* _stalkerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<UGhostStalkedComponent> _ghostStalkedComponentClassPtr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _crouchAttackRequiredTimeSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _debugMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _ghostStalkSpeedStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxStalkPointsPerSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _survivorMaximumSightDistance;

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void RefreshSurvivorMaximumSightDistance() const;

private:
	UFUNCTION(BlueprintCallable)
	void OnLeanStateChanged(ELeanState leanState);

	UFUNCTION(BlueprintCallable)
	void Authority_OnStalkModeChanged(bool isInStalkMode);

	UFUNCTION(BlueprintCallable)
	void Authority_OnIsCrouchedChanged(bool isCrouched);

public:
	UGhostStalkPowerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGhostStalkPowerComponent) { return 0; }
