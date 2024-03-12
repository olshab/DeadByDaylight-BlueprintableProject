#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CurrencyProgressionRewardViewData.h"
#include "MarketingInvitationPopupViewInterface.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UMarketingInvitationPopupViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IMarketingInvitationPopupViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ShowRewards(const bool showRewards);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetRewards(const TArray<FCurrencyProgressionRewardViewData>& rewards);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetQRCodeImage(const UTexture2D* qrCodeImage);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetDoNotShowOffer(const bool doNotShowOffer);

};
