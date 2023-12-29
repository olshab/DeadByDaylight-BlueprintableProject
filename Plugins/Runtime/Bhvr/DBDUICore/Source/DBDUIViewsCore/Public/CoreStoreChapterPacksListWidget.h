#pragma once

#include "CoreMinimal.h"
#include "StoreChapterPacksListViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreChapterPacksListWidget.generated.h"

class UCoreStoreChapterPackItemWidget;
class UVerticalBox;
class UCorePreConstructableList;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreChapterPacksListWidget : public UCoreBaseUserWidget, public IStoreChapterPacksListViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _preConstructedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreChapterPackItemWidget> _itemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* Content;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _itemList;

private:
	UFUNCTION(BlueprintCallable)
	void OnItemBuyActionClicked(const FString& packId);

public:
	UCoreStoreChapterPacksListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreChapterPacksListWidget) { return 0; }
