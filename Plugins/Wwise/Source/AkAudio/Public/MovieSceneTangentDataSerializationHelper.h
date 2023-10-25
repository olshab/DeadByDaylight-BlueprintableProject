#pragma once

#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "MovieSceneTangentDataSerializationHelper.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTangentDataSerializationHelper
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ArriveTangent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LeaveTangent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ArriveTangentWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LeaveTangentWeight;

public:
	AKAUDIO_API FMovieSceneTangentDataSerializationHelper();
};

FORCEINLINE uint32 GetTypeHash(const FMovieSceneTangentDataSerializationHelper) { return 0; }
