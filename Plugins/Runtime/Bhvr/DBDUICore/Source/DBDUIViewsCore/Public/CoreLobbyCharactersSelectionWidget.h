#pragma once

#include "CoreMinimal.h"
#include "LobbyCharactersSelectionViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreLobbyCharactersSelectionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreLobbyCharactersSelectionWidget : public UCoreBaseUserWidget, public ILobbyCharactersSelectionViewInterface
{
	GENERATED_BODY()

public:
	UCoreLobbyCharactersSelectionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreLobbyCharactersSelectionWidget) { return 0; }
