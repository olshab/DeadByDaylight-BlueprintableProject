#pragma once

#include "CoreMinimal.h"
#include "MarketingInvitationPopupJoinDelegate.h"
#include "Templates/SubclassOf.h"
#include "MarketingInvitationPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "MarketingInvitationPopupDoNotShowOfferDelegate.h"
#include "CoreMarketingInvitationPopupWidget.generated.h"

class UCoreCurrencyProgressionRewardWidget;
class UDBDImage;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMarketingInvitationPopupWidget : public UCoreGenericPopupWidget, public IMarketingInvitationPopupViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreCurrencyProgressionRewardWidget> RewardWidgetClass;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UVerticalBox* RewardsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* RewardsBackgroundImage;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FMarketingInvitationPopupDoNotShowOfferDelegate _marketingInvitationPopupDoNotShowOfferDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FMarketingInvitationPopupJoinDelegate _marketingInvitationPopupJoinDelegate;

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void OnJoinButtonClicked() const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void OnDoNotShowOfferToggleButtonClicked(bool doNotShowOffer) const;

public:
	UCoreMarketingInvitationPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMarketingInvitationPopupWidget) { return 0; }
