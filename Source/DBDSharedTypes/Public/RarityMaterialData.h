#pragma once

#include "CoreMinimal.h"
#include "RarityMaterialData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FRarityMaterialData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* LoadoutPartMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* CustomizationMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* TooltipHeaderMaterial;

public:
	DBDSHAREDTYPES_API FRarityMaterialData();
};

FORCEINLINE uint32 GetTypeHash(const FRarityMaterialData) { return 0; }
