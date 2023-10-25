#pragma once

#include "CoreMinimal.h"
#include "DBDTimer.h"
#include "TargetFocusTimer.generated.h"

class ACamperPlayer;

USTRUCT(BlueprintType)
struct FTargetFocusTimer
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _camper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTimer _cooldownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _totalTime;

public:
	DEADBYDAYLIGHT_API FTargetFocusTimer();
};

FORCEINLINE uint32 GetTypeHash(const FTargetFocusTimer) { return 0; }
