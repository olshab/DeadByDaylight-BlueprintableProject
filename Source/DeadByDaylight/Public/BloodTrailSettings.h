#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/EngineTypes.h"
#include "PerPlatformProperties.h"
#include "BloodTrailSettings.generated.h"

class UBloodDecalEffect;

UCLASS(Blueprintable)
class UBloodTrailSettings : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _initialDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numBloodDropsPerBloodPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _bloodDropsInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _randomlyRotateBloodDrops;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _bloodDropsRandomScatter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETraceTypeQuery> _bloodTraceChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBloodDecalEffect* _bloodDecalEffect;

	UPROPERTY(EditAnywhere)
	FPerPlatformInt _decalPoolSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _recycleThresholdPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _recycleDistancePercentage;

	UPROPERTY(EditAnywhere)
	FPerPlatformInt _maxOverlapping;

public:
	UBloodTrailSettings();
};

FORCEINLINE uint32 GetTypeHash(const UBloodTrailSettings) { return 0; }
