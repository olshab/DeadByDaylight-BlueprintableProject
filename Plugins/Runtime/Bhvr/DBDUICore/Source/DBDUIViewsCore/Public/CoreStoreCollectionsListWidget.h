#pragma once

#include "CoreMinimal.h"
#include "StoreCollectionsListViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreCollectionsListWidget.generated.h"

class UVerticalBox;
class UCoreStoreCollectionsItemWidget;
class UCorePreConstructableList;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreCollectionsListWidget : public UCoreBaseUserWidget, public IStoreCollectionsListViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* CollectionItemListBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCollectionsItemWidget> _collectionItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedItemsCount;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _itemList;

public:
	UCoreStoreCollectionsListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCollectionsListWidget) { return 0; }
