#pragma once

#include "CoreMinimal.h"
#include "Curves/RealCurve.h"
#include "Curves/RichCurve.h"
#include "MovieSceneTangentDataSerializationHelper.h"
#include "MovieSceneFloatValueSerializationHelper.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFloatValueSerializationHelper
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERichCurveInterpMode> InterpMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERichCurveTangentMode> TangentMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMovieSceneTangentDataSerializationHelper Tangent;

public:
	AKAUDIO_API FMovieSceneFloatValueSerializationHelper();
};

FORCEINLINE uint32 GetTypeHash(const FMovieSceneFloatValueSerializationHelper) { return 0; }
