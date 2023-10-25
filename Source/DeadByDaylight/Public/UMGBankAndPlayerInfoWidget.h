#pragma once

#include "CoreMinimal.h"
#include "TooltipPressedData.h"
#include "MobileBaseUserWidget.h"
#include "ECurrencyType.h"
#include "Components/SlateWrapperTypes.h"
#include "OnButtonClickEvent.h"
#include "UMGBankAndPlayerInfoWidget.generated.h"

class UUMGLevelBannerWidget;
class UUMGSelectedCharacterWidget;
class UUMGMainMenuMonthlyPassButton;
class UUMGBankWidget;
class UTextBlock;
class UUMGRankBanner;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBankAndPlayerInfoWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBankWidget* BankWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* PlayerNameText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGSelectedCharacterWidget* SelectedCharacterWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility RankWidgetVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLevelBannerWidget* LevelBanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGRankBanner* RankBanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGMainMenuMonthlyPassButton* MonthlyPassButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnButtonClickEvent _onCancelPartyButtonClickedEvent;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetPlayerLevelBP(int32 level, int32 devotion, int32 currentLevelXp, int32 totalLevelXp, bool isSlasher, bool playUpdateAnim);

private:
	UFUNCTION(BlueprintCallable)
	void OnTooltipTriggeredByRankBanner(const FTooltipPressedData& tooltipPressedData);

public:
	UFUNCTION(BlueprintCallable)
	void OnTooltipTriggeredByLevelBannerWidget(const FTooltipPressedData& tooltipPressedData);

private:
	UFUNCTION(BlueprintCallable)
	void OnTooltipTriggeredByCurrency(const FTooltipPressedData& tooltipPressedData, const ECurrencyType currencyType);

public:
	UFUNCTION(BlueprintCallable)
	void OnPurchaseAuricCellsButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnPrestigeButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnMainMenuSubscriptionClicked();

private:
	UFUNCTION(BlueprintCallable)
	void OnCancelPartyButtonClicked();

public:
	UUMGBankAndPlayerInfoWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBankAndPlayerInfoWidget) { return 0; }
