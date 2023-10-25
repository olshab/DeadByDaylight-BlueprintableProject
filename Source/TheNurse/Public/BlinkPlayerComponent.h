#pragma once

#include "CoreMinimal.h"
#include "BlinkParams.h"
#include "Engine/EngineTypes.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "BlinkPlayerComponent.generated.h"

class ACharacter;
class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkPlayerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _maxBlinkDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minBlinkDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _blinkFOVCurve;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_StartBlink(const FBlinkParams& params);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_EndBlink();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StartBlink(const FBlinkParams& params);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_EndBlink();

	UFUNCTION(BlueprintCallable)
	void Local_OnMovementModeChanged(ACharacter* character, TEnumAsByte<EMovementMode> prevMovementMode, uint8 previousCustomMode);

public:
	UBlinkPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlinkPlayerComponent) { return 0; }
