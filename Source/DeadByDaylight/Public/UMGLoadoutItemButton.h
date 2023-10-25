#pragma once

#include "CoreMinimal.h"
#include "EInventoryButtonState.h"
#include "Styling/SlateBrush.h"
#include "MobileBaseUserWidget.h"
#include "OnLoadoutItemButtonLongPressEvent.h"
#include "OnLoadoutItemButtonClickedEvent.h"
#include "Components/SlateWrapperTypes.h"
#include "InventorySlotData.h"
#include "EItemRarity.h"
#include "EStatusEffectType.h"
#include "UMGLoadoutItemButton.generated.h"

class UTextBlock;
class UButton;
class UCanvasPanel;
class UImage;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLoadoutItemButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLoadoutItemButtonClickedEvent OnLoadoutItemButtonClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLoadoutItemButtonClickedEvent OnDisabledItemButtonClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLoadoutItemButtonLongPressEvent OnLoadoutItemButtonLongPress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HideStackCount;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TextStackCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* EmptyCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* EmptyButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* LockedButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ActionCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ImageRarityBG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ImageGradient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ImagePaint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ImageEventBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ImagePaintTop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ImagePaintBottom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility EmptyCanvasVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility ActionCanvasVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility PrivateCanvasVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility LockIconVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility EmptyIconVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility SpecialEventVisiblity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility LoadoutSelectedVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility LoadoutLockVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ImageIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ImageShadow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* ActionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush EmptyBGAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush DisableBGAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FInventorySlotData LoadoutItemData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _triggerClickEventForLoadoutWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* CanvasUnlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TextUnlockLevel;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateWidgetByState(EInventoryButtonState state);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateWidgetByDataBP(const FInventorySlotData& slotData);

	UFUNCTION(BlueprintCallable)
	void UpdateWidgetByData(const FInventorySlotData& slotData);

protected:
	UFUNCTION(BlueprintCallable)
	void UpdateUnlockable(const FString& nameToDisplay, int32 unlockableLevel);

	UFUNCTION(BlueprintCallable)
	void UpdateStackCount(int32 stackCount);

	UFUNCTION(BlueprintCallable)
	void UpdateImageColor(EItemRarity rarity, EStatusEffectType effectType);

public:
	UFUNCTION(BlueprintCallable)
	void ShowClickableOutline(bool clickable);

	UFUNCTION(BlueprintCallable)
	void SetIsSelected(bool isSelected);

protected:
	UFUNCTION(BlueprintCallable)
	void SetIconImageByPath(const FString& iconPath);

private:
	UFUNCTION(BlueprintCallable)
	void OnLockedButtonClicked();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitializationForLoadoutWidget();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitializationForCharacterInfoWidget();

	UFUNCTION(BlueprintCallable)
	FName GetLoadoutItemID();

	UFUNCTION(BlueprintCallable)
	void BroadcastLongPressEvent(FName itemID);

	UFUNCTION(BlueprintCallable)
	void BroadcastClickedEvent(FName itemID);

public:
	UUMGLoadoutItemButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLoadoutItemButton) { return 0; }
