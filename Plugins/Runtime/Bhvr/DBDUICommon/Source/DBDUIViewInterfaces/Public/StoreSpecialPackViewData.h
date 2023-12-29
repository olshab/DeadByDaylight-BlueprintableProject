#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PriceTagViewData.h"
#include "UObject/SoftObjectPtr.h"
#include "StoreSpecialPackViewData.generated.h"

class UTexture2D;
class UStoreCustomizationItemViewData;
class UStoreCharacterItemViewData;

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreSpecialPackViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplayTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> PackImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPriceTagViewData PriceTagData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCharacterItemViewData*> CharactersData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCustomizationItemViewData*> CustomizationsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime ActivationStartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime ActivationEndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

public:
	UStoreSpecialPackViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSpecialPackViewData) { return 0; }
