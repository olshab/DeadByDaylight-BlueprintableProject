#pragma once

#include "CoreMinimal.h"
#include "EOpacityChannelComponent.h"
#include "EGeometryDataFieldType.h"
#include "EOutputDDSCompressionType.h"
#include "EOutputPixelFormat.h"
#include "EDitherType.h"
#include "EFillMode.h"
#include "EOutputImageFileFormat.h"
#include "UObject/NoExportTypes.h"
#include "GeometryDataCasterSettings.generated.h"

USTRUCT(BlueprintType)
struct FGeometryDataCasterSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MaterialChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OpacityChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOpacityChannelComponent OpacityChannelComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDitherType DitherType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFillMode FillMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Dilation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseMultisampling : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOutputPixelFormat OutputPixelFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOutputImageFileFormat OutputImageFileFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOutputDDSCompressionType OutputDDSCompressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGeometryDataFieldType GeometryDataFieldType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GeometryDataFieldIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MappingLayerIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector4 MappingInf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector4 MappingSup;

public:
	SIMPLYGONUOBJECTS_API FGeometryDataCasterSettings();
};

FORCEINLINE uint32 GetTypeHash(const FGeometryDataCasterSettings) { return 0; }
