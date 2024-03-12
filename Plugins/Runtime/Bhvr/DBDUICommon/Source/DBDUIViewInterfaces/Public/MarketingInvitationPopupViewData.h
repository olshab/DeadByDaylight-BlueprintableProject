#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "MarketingInvitationPopupViewData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UMarketingInvitationPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UMarketingInvitationPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UMarketingInvitationPopupViewData) { return 0; }
