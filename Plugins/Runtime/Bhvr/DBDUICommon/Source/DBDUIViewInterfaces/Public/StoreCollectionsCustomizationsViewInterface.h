#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreCollectionsActionButtonsViewData.h"
#include "UObject/ScriptInterface.h"
#include "StoreCollectionsCustomizationsViewInterface.generated.h"

class UStoreCollectionViewData;
class IStoreCharactersCustomizationsViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCollectionsCustomizationsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreCollectionsCustomizationsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCollectionData(const UStoreCollectionViewData* collectionViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetActionButtons(const FStoreCollectionsActionButtonsViewData& buttonsViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersCustomizationsViewInterface> GetStoreCharactersSelectionInterface() const;

};
