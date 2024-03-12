#pragma once

#include "CoreMinimal.h"
#include "LobbySubPresenter.h"
#include "ELobbyCharactersMenuState.h"
#include "LobbyCharactersSubPresenter.generated.h"

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API ULobbyCharactersSubPresenter : public ULobbySubPresenter
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnSubTabSelected(ELobbyCharactersMenuState selectedTabId);

public:
	ULobbyCharactersSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const ULobbyCharactersSubPresenter) { return 0; }
