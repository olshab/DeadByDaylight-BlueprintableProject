#pragma once

#include "CoreMinimal.h"
#include "PresenterParentWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "GridPresenterParentWidget.generated.h"

class UGridPanel;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UGridPresenterParentWidget : public UPresenterParentWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UGridPanel* Container;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* DividerImage;

public:
	UFUNCTION(BlueprintCallable)
	void OnChildVisibilityChanged(ESlateVisibility InVisibility);

public:
	UGridPresenterParentWidget();
};

FORCEINLINE uint32 GetTypeHash(const UGridPresenterParentWidget) { return 0; }
