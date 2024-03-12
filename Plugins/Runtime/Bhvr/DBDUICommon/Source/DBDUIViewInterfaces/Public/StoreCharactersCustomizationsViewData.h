#pragma once

#include "CoreMinimal.h"
#include "StoreCategoryViewData.h"
#include "ECustomizationCategory.h"
#include "StoreCharactersCustomizationsViewData.generated.h"

class UStoreCustomizationItemViewData;

USTRUCT(BlueprintType)
struct FStoreCharactersCustomizationsViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCustomizationItemViewData*> Customizations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FName> SelectedCustomizationIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FName> EquippedCustomizationIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SelectedSlotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FStoreCategoryViewData> Categories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECustomizationCategory SelectedCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<int32> PresetIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SelectedPresetId;

public:
	DBDUIVIEWINTERFACES_API FStoreCharactersCustomizationsViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCharactersCustomizationsViewData) { return 0; }
