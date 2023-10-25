#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "PurchaseCurrencyData.h"
#include "ECustomizationCategory.h"
#include "EItemRarity.h"
#include "UObject/NoExportTypes.h"
#include "SpecialEventUIInfo.h"
#include "CustomTransformation.h"
#include "StoreItemSlotData.generated.h"

USTRUCT(BlueprintType)
struct FStoreItemSlotData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName ItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECustomizationCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName MirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplayCollectionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString RoleCategoryInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString RarityPartInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FSpecialEventUIInfo EventInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FPurchaseCurrencyData> PurchaseDataList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FName> ParentBundleIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FName> ChildrenItemIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCustomTransformation CustomTransformation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBuyable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEquipped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNewInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsVisceral;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasPlayMoriButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPlayerRole AssociatedRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime ReleaseDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString RemainingTimeItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString RemainingTimeDiscount;

public:
	DEADBYDAYLIGHT_API FStoreItemSlotData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreItemSlotData) { return 0; }
