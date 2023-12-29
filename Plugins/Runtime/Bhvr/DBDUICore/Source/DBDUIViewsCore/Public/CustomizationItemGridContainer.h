#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CustomizationItemGridContainer.generated.h"

class UCoreStoreCustomizationItemWidget;
class UGridPanel;
class UCoreSelectableButtonWidget;
class UUserWidget;
class UStoreCustomizationItemViewData;
class UDBDScrollBox;
class UCoreKeyListenerInputPromptWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCustomizationItemGridContainer : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClickedDelegate, const int32, selectedIndex);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCustomizationItemWidget> _customizationRewardWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UUserWidget> _emptyRewardWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _setSmallTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _columnCountInGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _customizationTileScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _layoutMask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _rowCountToShowScrollBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _fillGridWithEmptyItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UGridPanel* GridContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDScrollBox* ScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _scrollLabelText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UCoreStoreCustomizationItemWidget*> _customizationRewards;

public:
	UFUNCTION(BlueprintCallable)
	void SetSelectedItem(const int32 selectedIndex);

	UFUNCTION(BlueprintCallable)
	void SetScrollPrompt(UCoreKeyListenerInputPromptWidget* displayPrompt);

	UFUNCTION(BlueprintCallable)
	void SetItemsLayout(int32 layoutMask);

	UFUNCTION(BlueprintCallable)
	void SetData(const TArray<UStoreCustomizationItemViewData*>& customizationRewardsData, const int32 selectedIndex);

protected:
	UFUNCTION(BlueprintCallable)
	void OnItemClicked(UCoreSelectableButtonWidget* buttonTarget, bool isSelected);

	UFUNCTION(BlueprintCallable)
	void ClearGrid();

public:
	UCustomizationItemGridContainer();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationItemGridContainer) { return 0; }
