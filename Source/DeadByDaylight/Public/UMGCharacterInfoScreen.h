#pragma once

#include "CoreMinimal.h"
#include "TeachableData.h"
#include "MobileBaseUserWidget.h"
#include "OnButtonClickEvent.h"
#include "OnLoadoutItemButtonLongPressEvent.h"
#include "InventorySlotData.h"
#include "UObject/SoftObjectPtr.h"
#include "OnTeachableTooltipLongPressEvent.h"
#include "UObject/NoExportTypes.h"
#include "UMGCharacterInfoScreen.generated.h"

class UCanvasPanel;
class UUMGCharacterInfoWidget;
class UUMGPopupButton;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGCharacterInfoScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ContentPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGCharacterInfoWidget> SurvivorInfoWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGCharacterInfoWidget> KillerInfoWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGPopupButton* ProgressionButton;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnTeachableTooltipLongPressEvent _onTeachableTooltipTriggeredLongPressEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnLoadoutItemButtonLongPressEvent _onPowerItemTooltipTriggeredLongPressEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnButtonClickEvent _onProgressionButtonClickEvent;

private:
	UFUNCTION(BlueprintCallable)
	void HandleTeachablePerkTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position);

protected:
	UFUNCTION(BlueprintCallable)
	void HandleProgressionButtonClickEvent();

private:
	UFUNCTION(BlueprintCallable)
	void HandlePowerItemTooltipLongPressedEvent(const FInventorySlotData& slotData, FVector2D position);

public:
	UUMGCharacterInfoScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterInfoScreen) { return 0; }
