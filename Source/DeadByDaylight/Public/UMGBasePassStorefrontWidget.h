#pragma once

#include "CoreMinimal.h"
#include "UMGBaseStorefrontWidget.h"
#include "UMGBasePassStorefrontWidget.generated.h"

class UUMGSubscriptionsPageScrollWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBasePassStorefrontWidget : public UUMGBaseStorefrontWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGSubscriptionsPageScrollWidget* SubscriptionsPageScroll;

private:
	UFUNCTION(BlueprintCallable)
	void HandleSubscriptionInfoButtonClickedEvent(const FString& subscriptionDetails);

	UFUNCTION(BlueprintCallable)
	void HandleBuySubscriptionPackButtonClickedEvent(FName subscriptionPackID);

public:
	UUMGBasePassStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBasePassStorefrontWidget) { return 0; }
