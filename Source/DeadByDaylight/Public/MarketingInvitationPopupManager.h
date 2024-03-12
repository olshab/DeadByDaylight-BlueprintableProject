#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MarketingInvitationPopupManager.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UMarketingInvitationPopupManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UMarketingInvitationPopupManager();
};

FORCEINLINE uint32 GetTypeHash(const UMarketingInvitationPopupManager) { return 0; }
