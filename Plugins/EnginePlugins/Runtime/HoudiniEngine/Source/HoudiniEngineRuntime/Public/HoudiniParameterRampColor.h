#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameterMultiParm.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniParameterRampColor.generated.h"

class UHoudiniParameterRampColorPoint;
class UHoudiniParameterRampModificationEvent;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UHoudiniParameterRampColorPoint*> Points;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCaching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UHoudiniParameterRampColorPoint*> CachedPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> DefaultPositions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FLinearColor> DefaultValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> DefaultChoices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumDefaultPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UHoudiniParameterRampModificationEvent*> ModificationEvents;

public:
	UHoudiniParameterRampColor();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterRampColor) { return 0; }
