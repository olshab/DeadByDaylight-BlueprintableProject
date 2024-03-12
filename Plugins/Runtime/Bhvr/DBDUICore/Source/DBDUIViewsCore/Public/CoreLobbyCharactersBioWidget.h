#pragma once

#include "CoreMinimal.h"
#include "LobbyCharactersBioViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreLobbyCharactersBioWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreLobbyCharactersBioWidget : public UCoreBaseUserWidget, public ILobbyCharactersBioViewInterface
{
	GENERATED_BODY()

public:
	UCoreLobbyCharactersBioWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreLobbyCharactersBioWidget) { return 0; }
