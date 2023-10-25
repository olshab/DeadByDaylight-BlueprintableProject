#pragma once

#include "CoreMinimal.h"
#include "EBlinkPowerState.h"
#include "Components/ActorComponent.h"
#include "BlinkPowerEventDispatcher.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkPowerEventDispatcher : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFXEvent);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFXUpdate, float, progressPercent);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBlinkChargeStop, bool, stopByBlink);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsBlinkingChanged, bool, isBlinking);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsChargingBlinkChanged, bool, isChargingBlink);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBlinkPowerStateChanged, EBlinkPowerState, oldState, EBlinkPowerState, newState);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBlinkChargesChanged, int32, charges, bool, wasSetByRecharge);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFXEvent OnFinishPlaying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFXEvent OnStartBlinkChargeEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFXUpdate OnUpdateBlinkChargeEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnBlinkChargeStop OnStopBlinkChargeEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFXEvent OnEnterBlinkEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFXUpdate OnUpdateBlinkEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFXEvent OnExitBlinkEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFXEvent OnEnterChainBlinkEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFXUpdate OnUpdateChainBlinkEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFXEvent OnExitChainBlinkEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFXEvent OnEnterCooldownEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFXUpdate OnUpdateCooldownEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFXEvent OnExitCooldownEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnIsBlinkingChanged OnIsBlinkingChangedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnIsChargingBlinkChanged OnIsChargingBlinkChangedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFXEvent OnBlinkChargeFullEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnBlinkPowerStateChanged OnBlinkPowerStateChangedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnBlinkChargesChanged OnBlinkChargesChangedEvent;

public:
	UBlinkPowerEventDispatcher();
};

FORCEINLINE uint32 GetTypeHash(const UBlinkPowerEventDispatcher) { return 0; }
