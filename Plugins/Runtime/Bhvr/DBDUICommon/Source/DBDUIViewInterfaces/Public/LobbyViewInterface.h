#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ELobbyMenuState.h"
#include "UObject/ScriptInterface.h"
#include "LobbyViewInterface.generated.h"

class ILobbyCharactersViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API ULobbyViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ILobbyViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetMenuState(const ELobbyMenuState state);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	TScriptInterface<ILobbyCharactersViewInterface> GetLobbyCharactersInterface() const;

};
