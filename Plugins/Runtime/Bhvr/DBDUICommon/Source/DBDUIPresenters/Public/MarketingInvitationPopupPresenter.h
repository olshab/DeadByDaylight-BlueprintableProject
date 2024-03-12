#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "MarketingInvitationPopupPresenter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UMarketingInvitationPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnJoinButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnDoNotShowOfferToggleButtonClicked(const bool doNotShowOffer);

public:
	UMarketingInvitationPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UMarketingInvitationPopupPresenter) { return 0; }
