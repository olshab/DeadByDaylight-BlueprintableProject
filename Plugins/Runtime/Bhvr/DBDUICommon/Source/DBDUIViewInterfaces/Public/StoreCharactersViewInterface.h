#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EStoreCharactersMenuState.h"
#include "TabWidgetData.h"
#include "UObject/ScriptInterface.h"
#include "StoreCharactersViewInterface.generated.h"

class IStoreCharactersBioViewInterface;
class IStoreCharactersCustomizationsViewInterface;
class IStoreCharactersSelectionViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCharactersViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreCharactersViewInterface : public IInterface
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
	void SetMenuState(EStoreCharactersMenuState state);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCharacterName(const FText& characterName);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersSelectionViewInterface> GetStoreCharactersSelectionInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersCustomizationsViewInterface> GetStoreCharactersCustomizationsInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersBioViewInterface> GetStoreCharactersBioInterface() const;

};
