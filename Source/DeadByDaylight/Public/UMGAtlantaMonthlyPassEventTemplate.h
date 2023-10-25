#pragma once

#include "CoreMinimal.h"
#include "UMGAtlantaBaseEventsTemplate.h"
#include "UMGAtlantaMonthlyPassEventTemplate.generated.h"

class UUMGSubscriptionPackButtonWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaMonthlyPassEventTemplate : public UUMGAtlantaBaseEventsTemplate
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGSubscriptionPackButtonWidget* MonthlyPassWidget;

public:
	UUMGAtlantaMonthlyPassEventTemplate();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaMonthlyPassEventTemplate) { return 0; }
