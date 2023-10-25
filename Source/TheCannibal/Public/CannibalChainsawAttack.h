#pragma once

#include "CoreMinimal.h"
#include "ButtonPromptSource.h"
#include "HillbillyChainsawAttack.h"
#include "TagStateBool.h"
#include "CannibalChainsawAttack.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THECANNIBAL_API UCannibalChainsawAttack : public UHillbillyChainsawAttack, public IButtonPromptSource
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _isInTantrum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _immuneToSuccessiveChainsawHitsDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ADBDPlayer*, float> _lastChainsawHitTimes;

public:
	UCannibalChainsawAttack();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttack) { return 0; }
