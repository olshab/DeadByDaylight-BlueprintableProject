#pragma once

#include "CoreMinimal.h"
#include "UMGAtlantaBaseEventsTemplate.h"
#include "UMGAtlantaCalendarEventsTemplate.generated.h"

class UUMGAtlantaDailyRewardsGrid;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaCalendarEventsTemplate : public UUMGAtlantaBaseEventsTemplate
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGAtlantaDailyRewardsGrid* DailyRewardGrid;

public:
	UUMGAtlantaCalendarEventsTemplate();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaCalendarEventsTemplate) { return 0; }
