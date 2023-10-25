#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ScriptInterface.h"
#include "StoreCollectionsViewInterface.generated.h"

class IStoreCollectionsAllViewInterface;
class IStoreCollectionsSpecialViewInterface;
class IStoreCollectionsFeaturedViewInterface;

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
	TScriptInterface<IStoreCollectionsSpecialViewInterface> GetTabSpecialInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCollectionsFeaturedViewInterface> GetTabFeaturedInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCollectionsAllViewInterface> GetTabAllInterface() const;

};
