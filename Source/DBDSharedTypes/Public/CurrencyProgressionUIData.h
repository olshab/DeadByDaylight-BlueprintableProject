#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "CurrencyProgressionUIData.generated.h"

class UMaterialInterface;
class UTexture2D;

USTRUCT(BlueprintType)
struct FCurrencyProgressionUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText TooltipTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText TooltipDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInterface> TooltipHeaderMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> TooltipDecorationIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInterface> RewardBackgroundMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> RewardIcon;

public:
	DBDSHAREDTYPES_API FCurrencyProgressionUIData();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyProgressionUIData) { return 0; }
