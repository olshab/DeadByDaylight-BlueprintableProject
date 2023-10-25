#pragma once

#include "CoreMinimal.h"
#include "CustomizationRewardViewData.h"
#include "CustomizationItemPreviewAreaViewData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationItemPreviewAreaViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomizationRewardViewData PreviewItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCustomizationRewardViewData> ItemsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOutfit;

public:
	DBDUIVIEWINTERFACES_API FCustomizationItemPreviewAreaViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationItemPreviewAreaViewData) { return 0; }
