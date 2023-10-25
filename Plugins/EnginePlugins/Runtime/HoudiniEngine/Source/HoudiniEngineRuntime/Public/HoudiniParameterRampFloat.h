#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameterMultiParm.h"
#include "HoudiniParameterRampFloat.generated.h"

class UHoudiniParameterRampFloatPoint;
class UHoudiniParameterRampModificationEvent;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UHoudiniParameterRampFloatPoint*> Points;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UHoudiniParameterRampFloatPoint*> CachedPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> DefaultPositions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> DefaultValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> DefaultChoices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumDefaultPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCaching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UHoudiniParameterRampModificationEvent*> ModificationEvents;

public:
	UHoudiniParameterRampFloat();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterRampFloat) { return 0; }
