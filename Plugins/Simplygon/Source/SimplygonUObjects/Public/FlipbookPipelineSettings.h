#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipelineSettings.h"
#include "FlipbookSettings.h"
#include "AttributeTessellationSettings.h"
#include "MappingImageSettings.h"
#include "FlipbookPipelineSettings.generated.h"

class USimplygonMaterialCaster;

USTRUCT(BlueprintType)
struct FFlipbookPipelineSettings: public FSimplygonPipelineSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFlipbookSettings FlipbookSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAttributeTessellationSettings AttributeTessellationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMappingImageSettings MappingImageSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<USimplygonMaterialCaster*> MaterialPropertyCasters;

public:
	SIMPLYGONUOBJECTS_API FFlipbookPipelineSettings();
};

FORCEINLINE uint32 GetTypeHash(const FFlipbookPipelineSettings) { return 0; }
