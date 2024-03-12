#pragma once

#include "CoreMinimal.h"
#include "StoreHeritagePacksListViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreHeritagePacksListWidget.generated.h"

class UCoreStoreHeritagePackItemWidget;
class UScrollBox;
class UUniformGridPanel;
class UCorePreConstructableList;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreHeritagePacksListWidget : public UCoreBaseUserWidget, public IStoreHeritagePacksListViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _preConstructedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreHeritagePackItemWidget> _itemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUniformGridPanel* Content;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UScrollBox* Scroll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numOfColumns;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _itemList;

private:
	UFUNCTION(BlueprintCallable)
	void OnPackSeen(const FString& packId);

	UFUNCTION(BlueprintCallable)
	void OnPackBuyButtonClicked(const FString& packId);

public:
	UCoreStoreHeritagePacksListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreHeritagePacksListWidget) { return 0; }
