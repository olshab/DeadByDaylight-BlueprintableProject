#pragma once

#include "CoreMinimal.h"
#include "UMGLoadoutBaseWidget.h"
#include "ECurrencyType.h"
#include "TooltipPressedData.h"
#include "UMGLobbySearchingWidget.generated.h"

class UButton;
class UUMGBankAndPlayerInfoWidget;
class UUMGPartySlotsWidget;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLobbySearchingWidget : public UUMGLoadoutBaseWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGBankAndPlayerInfoWidget* BankAndPlayerInfoWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText ItemOrPowerText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText AddonText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText OfferingText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText PerksText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText TextWaitingForPlayers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText TextEstimatedTimeTitle;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* ButtonCancelSearching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGPartySlotsWidget* PartySlots;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetWaitingTimer(int32 seconds);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetEstimatedWaitingTimer(int32 seconds);

protected:
	UFUNCTION(BlueprintCallable)
	void OnRankTooltipTriggered(const FTooltipPressedData& tooltipPressedData);

	UFUNCTION(BlueprintCallable)
	void OnLevelTooltipTriggered(const FTooltipPressedData& tooltipPressedData);

	UFUNCTION(BlueprintCallable)
	void OnCurrencyTooltipTriggered(const FTooltipPressedData& tooltipPressedData, ECurrencyType currencyType);

	UFUNCTION(BlueprintCallable)
	void HandleLeaveButtonClicked();

public:
	UUMGLobbySearchingWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLobbySearchingWidget) { return 0; }
