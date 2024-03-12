#pragma once

#include "CoreMinimal.h"
#include "LobbyCharactersCustomizationsViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreLobbyCharactersCustomizationsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreLobbyCharactersCustomizationsWidget : public UCoreBaseUserWidget, public ILobbyCharactersCustomizationsViewInterface
{
	GENERATED_BODY()

public:
	UCoreLobbyCharactersCustomizationsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreLobbyCharactersCustomizationsWidget) { return 0; }
