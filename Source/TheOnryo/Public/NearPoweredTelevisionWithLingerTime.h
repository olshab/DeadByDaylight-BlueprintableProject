#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "ActorPairQueryHeightRange.h"
#include "NearPoweredTelevisionWithLingerTime.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UNearPoweredTelevisionWithLingerTime : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _distanceFromTelevision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lingerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FActorPairQueryHeightRange _heightRange;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UFUNCTION(BlueprintPure)
	float GetPercentRemainingDuration() const;

public:
	UNearPoweredTelevisionWithLingerTime();
};

FORCEINLINE uint32 GetTypeHash(const UNearPoweredTelevisionWithLingerTime) { return 0; }
