#pragma once

#include "CoreMinimal.h"
#include "PlayerCardViewData.h"
#include "PlayerProfileViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "PlayerProfileClickedDelegate.h"
#include "CorePlayerProfileWidget.generated.h"

class UCoreButtonWidget;
class UCoreWalletWidget;
class UCorePlayerNameWidget;
class UDBDButton;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerProfileWidget : public UCoreBaseUserWidget, public IPlayerProfileViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreButtonWidget* PlayerCardButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreWalletWidget* Wallet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCorePlayerNameWidget* PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDButton* PlayerCardHoverZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPlayerProfileClickedDelegate _onPlayerProfileClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _playerCardEnabledOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _playerCardDisabledOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _playerProfileFocusOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _playerProfileUnfocusOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isProfileMenuContextEntered;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetPlayerCardAnimation(const bool isAnimationPlaying);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBadgeBannerData(const FPlayerCardViewData& badge, const FPlayerCardViewData& banner, const bool showBanner);

private:
	UFUNCTION(BlueprintCallable)
	void OnPlayerProfileClicked(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnPlayerCardButtonUnhovered(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnPlayerCardButtonHovered(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnPlayerCardBannerUnhovered();

	UFUNCTION(BlueprintCallable)
	void OnPlayerCardBannerHovered();

public:
	UFUNCTION()
	virtual void SetPlayerCardEnabled(bool isEnabled) override PURE_VIRTUAL(SetPlayerCardEnabled,);

public:
	UCorePlayerProfileWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerProfileWidget) { return 0; }
