#pragma once

#include "CoreMinimal.h"
#include "StoreChapterPacksListViewInterface.h"
#include "StoreRedirectionData.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreChapterPacksListWidget.generated.h"

class UCoreStoreChapterPackItemWidget;
class UVerticalBox;
class UScrollBox;
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UVerticalBox* Content;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UScrollBox* Scroll;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _itemList;

private:
	UFUNCTION(BlueprintCallable)
	void OnItemSeen(const FString& packId);

	UFUNCTION(BlueprintCallable)
	void OnItemCustomizationClicked(const FStoreRedirectionData& redirectionData);

	UFUNCTION(BlueprintCallable)
	void OnItemCharacterClicked(const FStoreRedirectionData& redirectionData);

	UFUNCTION(BlueprintCallable)
	void OnItemBuyActionClicked(const FString& packId);

public:
	UCoreStoreChapterPacksListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreChapterPacksListWidget) { return 0; }
