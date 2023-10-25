#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterFloat.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterFloat : public UHoudiniParameter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> Values;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> DefaultValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Unit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bNoSwap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasUIMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasUIMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsLogarithmic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Max;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UIMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UIMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsChildOfRamp;

public:
	UHoudiniParameterFloat();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterFloat) { return 0; }
