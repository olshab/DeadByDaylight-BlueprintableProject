#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreCharactersSelectionViewData.h"
#include "EPlayerRole.h"
#include "UObject/ScriptInterface.h"
#include "StoreCharactersSelectionViewInterface.generated.h"

class UCharacterPerkViewData;
class ISearchBarViewInterface;
class UMenuPowerViewData;
class IStoreCharactersFilterViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCharactersSelectionViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreCharactersSelectionViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateSelectedCharacter(const int32 selectedCharacterIndex, const bool scrollToSelection);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetPerksData(EPlayerRole role, const TArray<UCharacterPerkViewData*>& characterPerks);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetKillerPower(UMenuPowerViewData* killerPowerViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FStoreCharactersSelectionViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IStoreCharactersFilterViewInterface> GetStoreCharactersFilterInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<ISearchBarViewInterface> GetSearchBarViewInterface() const;

};
