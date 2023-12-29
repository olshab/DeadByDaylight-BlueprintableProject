#pragma once

#include "CoreMinimal.h"
#include "StoreSpecialPacksListViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreSpecialPacksListWidget.generated.h"

class UVerticalBox;
class UCorePreConstructableList;
class UCoreStoreSpecialPacksPackItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreSpecialPacksListWidget : public UCoreBaseUserWidget, public IStoreSpecialPacksListViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _preConstructedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreSpecialPacksPackItemWidget> _itemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* Content;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _itemList;

private:
	UFUNCTION(BlueprintCallable)
	void OnItemBuyActionClicked(const FString& packId);

public:
	UCoreStoreSpecialPacksListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreSpecialPacksListWidget) { return 0; }
