#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "TeachableData.h"
#include "MobileBaseUserWidget.h"
#include "OnTeachableTooltipLongPressEvent.h"
#include "OnLoadoutItemButtonLongPressEvent.h"
#include "UObject/NoExportTypes.h"
#include "InventorySlotData.h"
#include "UMGCharacterInfoWidget.generated.h"

class UScrollBox;
class UImage;
class UUMGCharacterScrollingInfoWidget;
class UCanvasPanel;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UUMGCharacterInfoWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UScrollBox* CharacterInfoScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCharacterScrollingInfoWidget* CharacterScrollingInfoWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* CharacterDLCPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CharacterBackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	FText _characterDifficultyText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString _characterDLCText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor _easyColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor _intermediaryColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor _hardColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor _currentColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	FText _characterDLCTitle;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnTeachableTooltipLongPressEvent _onTeachableTooltipTriggeredLongPressEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnLoadoutItemButtonLongPressEvent _onPowerItemTooltipTriggeredLongPressEvent;

private:
	UFUNCTION(BlueprintCallable)
	void HandleTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position);

	UFUNCTION(BlueprintCallable)
	void HandlePowerItemTooltipLongPressedEvent(const FInventorySlotData& slotData, FVector2D position);

public:
	UUMGCharacterInfoWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterInfoWidget) { return 0; }
