#pragma once

#include "CoreMinimal.h"
#include "CoreButtonSelector.h"
#include "Templates/SubclassOf.h"
#include "EEasingType.h"
#include "CoreStoreFeaturedCustomizationItemContainerWidget.generated.h"

class UStoreCustomizationItemViewData;
class UCoreStoreFeaturedCustomizationItemWidget;
class UCanvasPanel;
class UCoreInputSwitcherWidget;
class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreFeaturedCustomizationItemContainerWidget : public UCoreButtonSelector
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreFeaturedCustomizationItemWidget> ItemTileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* LeftArrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* RightArrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxVisibleTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TileHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SmallTileWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BigTileWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TileSpacing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TranslationDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEasingType TranslationEasingType;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<UStoreCustomizationItemViewData*> _cachedData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreStoreFeaturedCustomizationItemWidget*> _usedTilePool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreStoreFeaturedCustomizationItemWidget*> _availableTilePool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TMap<int32, UCoreStoreFeaturedCustomizationItemWidget*> _positionToWidgetMap;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetItems(const TArray<UStoreCustomizationItemViewData*>& viewDataArray);

private:
	UFUNCTION(BlueprintCallable)
	void OnSelectedItemChanged(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION(BlueprintCallable)
	void OnMoveCompleted();

	UFUNCTION(BlueprintCallable)
	void MovePrevious();

	UFUNCTION(BlueprintCallable)
	void MoveNext();

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitItemContainer();

public:
	UCoreStoreFeaturedCustomizationItemContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreFeaturedCustomizationItemContainerWidget) { return 0; }
