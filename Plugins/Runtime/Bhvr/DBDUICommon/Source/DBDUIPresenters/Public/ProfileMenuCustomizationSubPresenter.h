#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "ESortingOption.h"
#include "UObject/ScriptInterface.h"
#include "ESortingOrder.h"
#include "ProfileMenuCustomizationSubPresenter.generated.h"

class UStoreCustomizationItemViewData;
class IProfileMenuCustomizationViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UProfileMenuCustomizationSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IProfileMenuCustomizationViewInterface> _profileMenuCustomizationWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<UStoreCustomizationItemViewData*> _itemsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<UStoreCustomizationItemViewData*> _displayedItemsData;

private:
	UFUNCTION(BlueprintCallable)
	void OnSearchBarTextChanged(const FString& enteredText);

	UFUNCTION(BlueprintCallable)
	void OnRewardGridItemClicked(const int32 selectedIndex);

	UFUNCTION(BlueprintCallable)
	void OnEquipButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSortingChanged(const ESortingOption itemSorting, const ESortingOrder sortingOrder);

public:
	UProfileMenuCustomizationSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UProfileMenuCustomizationSubPresenter) { return 0; }
