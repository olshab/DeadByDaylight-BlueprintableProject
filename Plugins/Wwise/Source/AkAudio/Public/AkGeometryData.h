#pragma once

#include "CoreMinimal.h"
#include "AkAcousticSurface.h"
#include "UObject/NoExportTypes.h"
#include "AkTriangle.h"
#include "AkGeometryData.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FAkGeometryData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> Vertices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAkAcousticSurface> Surfaces;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAkTriangle> Triangles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UPhysicalMaterial*> ToOverrideAcousticTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UPhysicalMaterial*> ToOverrideOcclusion;

public:
	AKAUDIO_API FAkGeometryData();
};

FORCEINLINE uint32 GetTypeHash(const FAkGeometryData) { return 0; }
