#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterInt.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterInt : public UHoudiniParameter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> Values;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> DefaultValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Unit;

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
	int32 Min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Max;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UIMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UIMax;

public:
	UHoudiniParameterInt();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterInt) { return 0; }
