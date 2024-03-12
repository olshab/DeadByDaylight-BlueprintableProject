#pragma once

#include "CoreMinimal.h"
#include "StoreSpecialPacksListViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreSpecialPacksListWidget.generated.h"

class UCoreStoreSpecialPackItemWidget;
class UDBDScrollBox;
class UUniformGridPanel;
class UCorePreConstructableList;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreSpecialPacksListWidget : public UCoreBaseUserWidget, public IStoreSpecialPacksListViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _preConstructedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numOfColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreSpecialPackItemWidget> _itemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUniformGridPanel* ContentGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDScrollBox* Scroll;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _itemList;

private:
	UFUNCTION(BlueprintCallable)
	void OnItemClicked(const FString& packId);

public:
	UCoreStoreSpecialPacksListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreSpecialPacksListWidget) { return 0; }
