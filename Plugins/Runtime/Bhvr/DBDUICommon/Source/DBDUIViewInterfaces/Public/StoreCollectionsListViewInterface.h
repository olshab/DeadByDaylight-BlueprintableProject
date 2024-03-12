#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ScriptInterface.h"
#include "StoreCollectionsListViewInterface.generated.h"

class ISearchBarViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCollectionsListViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreCollectionsListViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<ISearchBarViewInterface> GetSearchBarViewInterface() const;

};
