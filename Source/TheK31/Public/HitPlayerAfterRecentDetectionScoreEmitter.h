#pragma once

#include "CoreMinimal.h"
#include "PlayerScoreEmitter.h"
#include "GameplayTagContainer.h"
#include "HitPlayerAfterRecentDetectionScoreEmitter.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable)
class THEK31_API UHitPlayerAfterRecentDetectionScoreEmitter : public UPlayerScoreEmitter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timeSinceDetectionDuration;

	UPROPERTY(EditAnywhere)
	FGameplayTag _scoreEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ADBDPlayer*, float> _trackers;

public:
	UHitPlayerAfterRecentDetectionScoreEmitter();
};

FORCEINLINE uint32 GetTypeHash(const UHitPlayerAfterRecentDetectionScoreEmitter) { return 0; }
