#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "PlayerProfileViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "PlayerProfileClickedDelegate.h"
#include "PlayerCardViewData.h"
#include "CorePlayerProfileWidget.generated.h"

class UCorePlayerNameWidget;
class UTexture2D;
class UCoreButtonWidget;
class UCoreWalletWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerProfileWidget : public UCoreBaseUserWidget, public IPlayerProfileViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreButtonWidget* PlayerCardButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreWalletWidget* Wallet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCorePlayerNameWidget* PlayerName;

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
	void SetBadgeBannerData(const TSoftObjectPtr<UTexture2D>& badge, const FPlayerCardViewData& banner, const bool showBanner);

private:
	UFUNCTION(BlueprintCallable)
	void OnPlayerProfileClicked(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnPlayerCardButtonUnhovered(UCoreButtonWidget* button);

	UFUNCTION(BlueprintCallable)
	void OnPlayerCardButtonHovered(UCoreButtonWidget* button);

public:
	UFUNCTION()
	virtual void SetPlayerCardEnabled(bool isEnabled) override PURE_VIRTUAL(SetPlayerCardEnabled,);

public:
	UCorePlayerProfileWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerProfileWidget) { return 0; }
