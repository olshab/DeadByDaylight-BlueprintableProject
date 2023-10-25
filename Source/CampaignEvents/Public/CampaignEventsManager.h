#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CampaignEventsManager.generated.h"

UCLASS(Blueprintable)
class CAMPAIGNEVENTS_API UCampaignEventsManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UCampaignEventsManager();
};

FORCEINLINE uint32 GetTypeHash(const UCampaignEventsManager) { return 0; }
