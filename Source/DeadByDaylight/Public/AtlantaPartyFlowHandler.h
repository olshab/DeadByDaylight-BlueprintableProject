#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaPartyFlowHandler.generated.h"

UCLASS(Blueprintable)
class UAtlantaPartyFlowHandler : public UObject
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void DisplayPartyFlowHandlerInfo();

public:
	UAtlantaPartyFlowHandler();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaPartyFlowHandler) { return 0; }
