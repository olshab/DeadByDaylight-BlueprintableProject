#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreCollectionsItemWidget.generated.h"

class UStoreCollectionViewData;
class UCoreStoreCustomizationItemWidget;
class UDBDTextBlock;
class UHorizontalBox;
class UCorePreConstructableList;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreCollectionsItemWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* TimerText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* CountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* StoreCustomizationListBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCustomizationItemWidget> _storeCustomizationItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _layoutMask;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _itemList;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ToggleExpanded();

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetupView(UStoreCollectionViewData* collectionViewData);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetExpanded(bool expanded);

public:
	UCoreStoreCollectionsItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCollectionsItemWidget) { return 0; }
