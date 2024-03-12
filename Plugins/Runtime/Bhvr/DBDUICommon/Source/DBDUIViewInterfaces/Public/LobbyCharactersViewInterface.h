#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ScriptInterface.h"
#include "LobbyCharactersViewInterface.generated.h"

class ILobbyCharactersBioViewInterface;
class ILobbyCharactersCustomizationsViewInterface;
class ILobbyCharactersSelectionViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API ULobbyCharactersViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ILobbyCharactersViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	TScriptInterface<ILobbyCharactersSelectionViewInterface> GetLobbyCharactersSelectionInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	TScriptInterface<ILobbyCharactersCustomizationsViewInterface> GetLobbyCharactersCustomizationsInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	TScriptInterface<ILobbyCharactersBioViewInterface> GetLobbyCharactersBioInterface() const;

};
