#pragma once

#include "CoreMinimal.h"
#include "CoreButtonSelector.h"
#include "Templates/SubclassOf.h"
#include "Layout/Margin.h"
#include "CorePaginationContainerWidget.generated.h"

class UCoreSelectableButtonWidget;
class UDBDTextBlock;
class UGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class UCorePaginationContainerWidget : public UCoreButtonSelector
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelectedPageDelegate, int32, selectedPage, bool, isUpdate);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnSelectedPageDelegate OnSelectedPageDelegate;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreSelectableButtonWidget> PaginationWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 MaxNumberOfPages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UGridPanel* PaginationContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreSelectableButtonWidget* FirstPage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* FirstEllipsis;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* LastEllipsis;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreSelectableButtonWidget* LastPage;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(AllowPrivateAccess=true))
	FMargin _widgetPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreSelectableButtonWidget*> _paginationWidgetList;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateSelectedWidget(int32 currentIndex, int32 numberOfPages);

private:
	UFUNCTION(BlueprintCallable)
	void OnPaginationSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UFUNCTION(BlueprintCallable)
	int32 GetCurrentPage();

public:
	UCorePaginationContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePaginationContainerWidget) { return 0; }
