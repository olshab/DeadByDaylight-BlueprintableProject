#pragma once

#include "CoreMinimal.h"
#include "TeachableData.h"
#include "MobileBaseUserWidget.h"
#include "OnLoadoutItemButtonLongPressEvent.h"
#include "OnTeachableTooltipLongPressEvent.h"
#include "InventorySlotData.h"
#include "UObject/NoExportTypes.h"
#include "UMGCharacterScrollingInfoWidget.generated.h"

class UUMGTeachablePerkButton;
class UTextBlock;
class UUMGInventoryItemButton;
class UCanvasPanel;
class UUMGHtmlRichText;

UCLASS(Blueprintable, EditInlineNew)
class UUMGCharacterScrollingInfoWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTeachablePerkButton* FirstTeachablePerk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTeachablePerkButton* SecondTeachablePerk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTeachablePerkButton* ThirdTeachablePerk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* KillerInfoPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGInventoryItemButton* KillerPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGHtmlRichText* CharacterBackstoryBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _killerPowerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _killerSpeedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _killerTerrorRadiusText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _killerHeightText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _perksTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _teachablesTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _powerTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _attributesTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* FirstTeachablePerkText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* SecondTeachablePerkText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* ThirdTeachablePerkText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _backStoryTitle;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UUMGTeachablePerkButton*> _teachablePerkArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UTextBlock*> _teachablePerkNameArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnTeachableTooltipLongPressEvent _onTeachableTooltipTriggeredEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnLoadoutItemButtonLongPressEvent _onPowerButtonTooltipLongPressEvent;

private:
	UFUNCTION(BlueprintCallable)
	void HandleTooltipLongPressedKillerPowerEvent(const FInventorySlotData& itemData, FVector2D position);

	UFUNCTION(BlueprintCallable)
	void HandleTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position);

public:
	UUMGCharacterScrollingInfoWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterScrollingInfoWidget) { return 0; }
