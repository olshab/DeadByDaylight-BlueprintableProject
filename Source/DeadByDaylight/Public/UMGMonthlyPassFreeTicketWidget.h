#pragma once

#include "CoreMinimal.h"
#include "UMGMonthlyPassRewardItemWidget.h"
#include "UMGMonthlyPassFreeTicketWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGMonthlyPassFreeTicketWidget : public UUMGMonthlyPassRewardItemWidget
{
	GENERATED_BODY()

public:
	UUMGMonthlyPassFreeTicketWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGMonthlyPassFreeTicketWidget) { return 0; }
