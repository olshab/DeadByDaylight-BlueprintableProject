#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGExpandableListWidget.generated.h"

class UUserWidget;
class UUMGBaseButtonWidget;
class UVerticalBox;
class UTextBlock;
class UExpandableArea;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGExpandableListWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldHideExpandableListIfEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsExtendedAtStart;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* ExpansionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UVerticalBox* ItemContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* CategorieName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* ItemCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UExpandableArea* ExpandableArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText HeaderTitle;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TArray<UUserWidget*> _childWidgets;

protected:
	UFUNCTION(BlueprintCallable)
	void ToggleExpansion();

public:
	UUMGExpandableListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGExpandableListWidget) { return 0; }
