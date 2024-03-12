#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "LobbySubPresenter.generated.h"

UCLASS(Blueprintable, Abstract)
class DBDUIPRESENTERS_API ULobbySubPresenter : public USubPresenter
{
	GENERATED_BODY()

public:
	ULobbySubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const ULobbySubPresenter) { return 0; }
