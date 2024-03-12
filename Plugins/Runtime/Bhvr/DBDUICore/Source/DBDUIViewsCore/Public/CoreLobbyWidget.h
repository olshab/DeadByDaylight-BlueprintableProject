#pragma once

#include "CoreMinimal.h"
#include "LobbyViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreLobbyWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreLobbyWidget : public UCoreBaseUserWidget, public ILobbyViewInterface
{
	GENERATED_BODY()

public:
	UCoreLobbyWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreLobbyWidget) { return 0; }
