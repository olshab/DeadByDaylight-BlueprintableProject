#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PriceTagViewData.h"
#include "UObject/SoftObjectPtr.h"
#include "StoreChapterPackViewData.generated.h"

class UTexture2D;
class UStoreCustomizationItemViewData;
class UStoreCharacterItemViewData;

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreChapterPackViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> PackImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPriceTagViewData PriceTagData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCharacterItemViewData*> CharactersData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCustomizationItemViewData*> CustomizationsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

public:
	UStoreChapterPackViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreChapterPackViewData) { return 0; }
