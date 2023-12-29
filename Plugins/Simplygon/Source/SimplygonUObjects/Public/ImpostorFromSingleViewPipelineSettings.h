#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipelineSettings.h"
#include "ImpostorFromSingleViewSettings.h"
#include "AttributeTessellationSettings.h"
#include "MappingImageSettings.h"
#include "ImpostorFromSingleViewPipelineSettings.generated.h"

class USimplygonMaterialCaster;

USTRUCT(BlueprintType)
struct FImpostorFromSingleViewPipelineSettings: public FSimplygonPipelineSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FImpostorFromSingleViewSettings ImpostorFromSingleViewSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAttributeTessellationSettings AttributeTessellationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMappingImageSettings MappingImageSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USimplygonMaterialCaster*> MaterialPropertyCasters;

public:
	SIMPLYGONUOBJECTS_API FImpostorFromSingleViewPipelineSettings();
};

FORCEINLINE uint32 GetTypeHash(const FImpostorFromSingleViewPipelineSettings) { return 0; }
