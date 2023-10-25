#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "StoreScreen.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UStoreScreen : public UScreenBase
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void OnUnlockWithCurrency(int32 currencyId, const FString& combinedItem);

	UFUNCTION(BlueprintCallable)
	void OnUnlockPack(const FString& packId) const;

	UFUNCTION(BlueprintCallable)
	void OnUnlockDlc(const FString& dlcId) const;

	UFUNCTION(BlueprintCallable)
	void OnTabSelected(int32 index);

	UFUNCTION(BlueprintCallable)
	void OnStorySelected() const;

	UFUNCTION(BlueprintCallable)
	void OnStoreItemSelected(const FString& itemId);

	UFUNCTION(BlueprintCallable)
	void OnStoreItemLinkSelected(const FString& itemId);

	UFUNCTION(BlueprintCallable)
	void OnStoreCharacterSelected(int32 characterIndex);

	UFUNCTION(BlueprintCallable)
	void OnStoreCatalogCategorySelected(int32 categoryIndex);

	UFUNCTION(BlueprintCallable)
	void OnSearchInputChanged(const FString& searchInput);

	UFUNCTION(BlueprintCallable)
	void OnRotateCharacter(float mouseDistanceChange);

	UFUNCTION(BlueprintCallable)
	void OnPromoCodeButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnPlayMoriSelected() const;

	UFUNCTION(BlueprintCallable)
	void OnNotEnoughTokens();

	UFUNCTION(BlueprintCallable)
	void OnMarketSlotButtonClick(int32 slotIndex);

	UFUNCTION(BlueprintCallable)
	void OnFiltersUpdated(bool all, bool rarityCommon, bool rarityUncommon, bool rarityRare, bool rarityVeryRare, bool rarityUltraRare, bool rarityArtifact, bool rarityLegendary, bool raritySpecialEvent, bool includeAllOwnedItems);

	UFUNCTION(BlueprintCallable)
	void OnFeaturedStoreItemSelected(const FString& itemId, bool isOutfit);

	UFUNCTION(BlueprintCallable)
	void OnFeaturedCharacterSelected(int32 characterIndex);

	UFUNCTION(BlueprintCallable)
	void OnFeaturedButtonSelected(int32 linkIndex);

	UFUNCTION(BlueprintCallable)
	void OnFeaturedBannerPackSelected(const FString& packId);

	UFUNCTION(BlueprintCallable)
	void OnFeaturedBannerItemSelected(const FString& itemId, bool isOutfit);

	UFUNCTION(BlueprintCallable)
	void OnFeaturedBannerDlcSelected(const FString& dlcId);

	UFUNCTION(BlueprintCallable)
	void OnEquipItem(const FString& itemId);

	UFUNCTION(BlueprintCallable)
	void OnCatalogSelected() const;

	UFUNCTION(BlueprintCallable)
	void OnBuyCurrencyBundle(int32 index);

public:
	UStoreScreen();
};

FORCEINLINE uint32 GetTypeHash(const UStoreScreen) { return 0; }
