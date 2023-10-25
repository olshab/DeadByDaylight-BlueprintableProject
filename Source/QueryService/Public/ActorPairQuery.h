#pragma once

#include "CoreMinimal.h"
#include "DistanceTrackerCase.h"
#include "ActorPairQuery.generated.h"

USTRUCT(BlueprintType)
struct FActorPairQuery
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TMap<uint32, FDistanceTrackerCase> _distanceTrackerCases;

	UPROPERTY(EditAnywhere)
	uint32 _caseIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _usePlanarDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isHeightRangeLimited;

public:
	QUERYSERVICE_API FActorPairQuery();
};

FORCEINLINE uint32 GetTypeHash(const FActorPairQuery) { return 0; }
