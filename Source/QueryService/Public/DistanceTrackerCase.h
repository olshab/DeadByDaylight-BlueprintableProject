#pragma once

#include "CoreMinimal.h"
#include "ActorPairQueryHeightRange.h"
#include "DistanceTrackerCase.generated.h"

USTRUCT(BlueprintType)
struct FDistanceTrackerCase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _distanceToTrackSquared;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FActorPairQueryHeightRange _heightRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _inRange;

public:
	QUERYSERVICE_API FDistanceTrackerCase();
};

FORCEINLINE uint32 GetTypeHash(const FDistanceTrackerCase) { return 0; }
