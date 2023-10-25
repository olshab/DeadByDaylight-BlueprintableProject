#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EStoreMenuState.h"
#include "TabWidgetData.h"
#include "UObject/ScriptInterface.h"
#include "StoreMenuViewInterface.generated.h"

class IStoreCharactersViewInterface;
class IStoreFeaturedViewInterface;
class IStoreCollectionsViewInterface;
class IStoreBundlesViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreMenuViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreMenuViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabSelected(int32 key);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabsData(const TArray<FTabWidgetData>& tabsData, int32 selectedKey);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabEnabled(int32 key, bool enabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetMenuState(EStoreMenuState state);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreFeaturedViewInterface> GetStoreFeaturedInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCollectionsViewInterface> GetStoreCollectionsInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersViewInterface> GetStoreCharactersInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreBundlesViewInterface> GetStoreBundlesInterface() const;

};
