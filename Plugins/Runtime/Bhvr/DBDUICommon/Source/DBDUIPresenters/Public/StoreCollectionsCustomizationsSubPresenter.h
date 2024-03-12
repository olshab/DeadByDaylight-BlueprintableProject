#pragma once

#include "CoreMinimal.h"
#include "ESortingOrder.h"
#include "StoreSubPresenter.h"
#include "StoreCharactersFiltersData.h"
#include "ECurrencyType.h"
#include "ESortingOption.h"
#include "StoreCollectionsCustomizationsSubPresenter.generated.h"

class UStoreCollectionViewData;
class UStoreCustomizationItemViewData;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreCollectionsCustomizationsSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreCollectionViewData* _currentCollection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreCustomizationItemViewData* _currentCustomization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCustomizationItemViewData*> _collectionCustomizations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCustomizationItemViewData*> _displayingCustomizations;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateDisplayingCustomizations();

	UFUNCTION(BlueprintCallable)
	void OnSortingChanged(const ESortingOption sortingType, const ESortingOrder sortingOrder);

	UFUNCTION(BlueprintCallable)
	void OnSearchBarTextChanged(const FString& searchString);

	UFUNCTION(BlueprintCallable)
	void OnFiltersChanged(const FStoreCharactersFiltersData& storeFiltersData);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationUnlockClicked(ECurrencyType currencyType);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSelected(const FName customizationId, const bool isSelected);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationEquipClicked();

	UFUNCTION(BlueprintCallable)
	void OnClearFiltersClicked();

public:
	UStoreCollectionsCustomizationsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCollectionsCustomizationsSubPresenter) { return 0; }
