#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EStoreCollectionsMenuState.h"
#include "UObject/ScriptInterface.h"
#include "StoreCollectionsViewInterface.generated.h"

class IStoreCollectionsListViewInterface;
class IStoreCollectionsCustomizationsViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCollectionsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreCollectionsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetMenuState(EStoreCollectionsMenuState menuState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCollectionsListViewInterface> GetCollectionsListViewInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCollectionsCustomizationsViewInterface> GetCollectionsCustomizationsInterface() const;

};
