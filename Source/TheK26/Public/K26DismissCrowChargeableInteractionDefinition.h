#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "TunableStat.h"
#include "ECamperDamageState.h"
#include "K26DismissCrowChargeableInteractionDefinition.generated.h"

class UK26PowerStatusHandlerComponent;
class UChargeableComponent;
class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK26DismissCrowChargeableInteractionDefinition : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _chargeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UK26PowerStatusHandlerComponent* _k26PowerStatusHandlerComponent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isLevelReadyToPlay;

protected:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer, UChargeableComponent* chargeableComponent);

protected:
	UFUNCTION(BlueprintCallable)
	void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	UK26DismissCrowChargeableInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UK26DismissCrowChargeableInteractionDefinition) { return 0; }
