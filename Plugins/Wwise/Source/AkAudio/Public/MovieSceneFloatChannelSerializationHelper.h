#pragma once

#include "CoreMinimal.h"
#include "Curves/RealCurve.h"
#include "MovieSceneFloatValueSerializationHelper.h"
#include "MovieSceneFloatChannelSerializationHelper.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFloatChannelSerializationHelper
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> Times;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMovieSceneFloatValueSerializationHelper> Values;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasDefaultValue;

public:
	AKAUDIO_API FMovieSceneFloatChannelSerializationHelper();
};

FORCEINLINE uint32 GetTypeHash(const FMovieSceneFloatChannelSerializationHelper) { return 0; }
