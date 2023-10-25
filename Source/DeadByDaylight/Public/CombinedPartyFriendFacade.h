#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CombinedPartyFriendFacade.generated.h"

UCLASS(Blueprintable)
class UCombinedPartyFriendFacade : public UObject
{
	GENERATED_BODY()

public:
	UCombinedPartyFriendFacade();
};

FORCEINLINE uint32 GetTypeHash(const UCombinedPartyFriendFacade) { return 0; }
