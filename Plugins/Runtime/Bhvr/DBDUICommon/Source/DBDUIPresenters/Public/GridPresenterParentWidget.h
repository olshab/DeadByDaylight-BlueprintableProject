#pragma once

#include "CoreMinimal.h"
#include "PresenterParentWidget.h"
#include "GridPresenterParentWidget.generated.h"

class UGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class UGridPresenterParentWidget : public UPresenterParentWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UGridPanel* Container;

public:
	UGridPresenterParentWidget();
};

FORCEINLINE uint32 GetTypeHash(const UGridPresenterParentWidget) { return 0; }
