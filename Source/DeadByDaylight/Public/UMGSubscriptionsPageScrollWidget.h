#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGGridPageScrollWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGSubscriptionsPageScrollWidget.generated.h"

class UUMGSubscriptionPackButtonWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGSubscriptionsPageScrollWidget : public UUMGGridPageScrollWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGSubscriptionPackButtonWidget> SubscriptionPackButtonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D ItemPadding;

private:
	UFUNCTION(BlueprintCallable)
	void HandleSubscriptionInfoButtonClickedEvent(const FString& subscriptionDetails);

	UFUNCTION(BlueprintCallable)
	void HandleBuySubscriptionPackButtonClickedEvent(FName subscriptionPackID);

public:
	UUMGSubscriptionsPageScrollWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSubscriptionsPageScrollWidget) { return 0; }
