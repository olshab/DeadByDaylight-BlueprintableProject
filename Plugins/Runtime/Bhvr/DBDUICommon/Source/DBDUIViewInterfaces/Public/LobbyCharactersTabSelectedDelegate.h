#pragma once

#include "CoreMinimal.h"
#include "ELobbyCharactersMenuState.h"
#include "LobbyCharactersTabSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyCharactersTabSelectedDelegate, const ELobbyCharactersMenuState, selectedTabId);
