#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreCharactersActionButtonsViewData.h"
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
	void SetCustomizationButtons(const FStoreCharactersActionButtonsViewData& buttonsViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCurrencyButtonsEnabled(const bool isEnabled) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCharacterData(const FText& characterName);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCharacterButtons(const FStoreCharactersActionButtonsViewData& buttonsViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersSelectionViewInterface> GetStoreCharactersSelectionInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersCustomizationsViewInterface> GetStoreCharactersCustomizationsInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersBioViewInterface> GetStoreCharactersBioInterface() const;

};
