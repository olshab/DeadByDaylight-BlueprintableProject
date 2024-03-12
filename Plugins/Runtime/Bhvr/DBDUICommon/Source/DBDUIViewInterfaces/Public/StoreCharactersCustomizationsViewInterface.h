#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreCategoryViewData.h"
#include "UObject/ScriptInterface.h"
#include "StoreCharactersCustomizationsViewData.h"
#include "ECustomizationCategory.h"
#include "StoreCharactersCustomizationsViewInterface.generated.h"

class IStoreCharactersFilterViewInterface;
class ISearchBarViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCharactersCustomizationsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreCharactersCustomizationsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateSelectedCustomizations(const TArray<FName>& selectedCustomizationIds, const int32 selectedSlotIndex, const bool scrollToSelection);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateCategories(const TArray<FStoreCategoryViewData>& categories, const ECustomizationCategory selectedCategory);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FStoreCharactersCustomizationsViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersFilterViewInterface> GetStoreCharactersFilterInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<ISearchBarViewInterface> GetSearchBarViewInterface() const;

};
