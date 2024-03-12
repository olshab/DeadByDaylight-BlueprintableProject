#pragma once

#include "CoreMinimal.h"
#include "StoreCollectionsListViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreCollectionsListWidget.generated.h"

class UCoreStoreCollectionsItemWidget;
class UPanelWidget;
class UUniformGridPanel;
class UDBDTextBlock;
class UDBDScrollBox;
class UCoreSearchBarWidget;
class UCorePreConstructableList;
class UStoreCollectionViewData;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreCollectionsListWidget : public UCoreBaseUserWidget, public IStoreCollectionsListViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* CollectionsNotFoundTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreSearchBarWidget* SearchBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDScrollBox* ScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUniformGridPanel* FeaturedUniformGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUniformGridPanel* AllUniformGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPanelWidget* FeaturedContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCollectionsItemWidget> _collectionItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _featuredItemsColumnCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _allItemsColumnCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedFeaturedItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedAllItemsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _featuredListHiddenThreshold;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _featuredItemsList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _allItemsList;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateTitleFromScroll(float currentOffset);

	UFUNCTION(BlueprintCallable)
	void OnCollectionItemClicked(const UStoreCollectionViewData* collectionViewData);

public:
	UCoreStoreCollectionsListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCollectionsListWidget) { return 0; }
