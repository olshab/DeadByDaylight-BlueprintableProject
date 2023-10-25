#pragma once

#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "MobileBaseUserWidget.h"
#include "EBloodStoreRowStyle.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGBloodStoreRowWidget.generated.h"

class UHorizontalBox;
class UCanvasPanel;
class UUMGBloodStoreItemWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGBloodStoreRowWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* ItemContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* LockStatusPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* HardLockedStatusPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _purchasedItemsNbr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _requiredItemNbr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBloodStoreRowStyle _rowStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin _itemPadding;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<UUMGBloodStoreItemWidget> _itemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UClass* _itemClass;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UnlockRow(bool playAnim);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void LockRow(bool playAnim);

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastUnlockAnimationFinished();

private:
	UFUNCTION(BlueprintCallable)
	void BroadcastBloodNodeSelected(const FString& id);

public:
	UUMGBloodStoreRowWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBloodStoreRowWidget) { return 0; }
