#pragma once

#include "CoreMinimal.h"
#include "MarketingInvitationPopupDoNotShowOfferDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMarketingInvitationPopupDoNotShowOfferDelegate, const bool, doNotShowOffer);
