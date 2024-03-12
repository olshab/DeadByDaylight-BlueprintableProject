#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EStoreSpecialPacksScreenState.h"
#include "UObject/ScriptInterface.h"
#include "StoreSpecialPacksViewInterface.generated.h"

class IStoreSpecialPacksDetailsViewInterface;
class IStoreHeritagePacksListViewInterface;
class IStoreSpecialPacksListViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreSpecialPacksViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreSpecialPacksViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetScreenState(EStoreSpecialPacksScreenState state, bool shouldAnimate);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsAnimating();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreSpecialPacksListViewInterface> GetTabSpecialsInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreHeritagePacksListViewInterface> GetTabHeritageInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreSpecialPacksListViewInterface> GetTabChaptersInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreSpecialPacksDetailsViewInterface> GetDetailsInterface() const;

};
