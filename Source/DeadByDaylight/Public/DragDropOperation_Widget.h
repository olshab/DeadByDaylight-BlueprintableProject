#pragma once

#include "CoreMinimal.h"
#include "Widgets/Layout/Anchors.h"
#include "Blueprint/DragDropOperation.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "DragDropOperation_Widget.generated.h"

class UPanelWidget;
class UUMGDragWidget;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDragDropOperation_Widget : public UDragDropOperation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGDragWidget* Widget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UPanelWidget* WidgetParent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D StartPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D WidgetLocalScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WidgetLocalOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D OnDropOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D OnDragOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnchors WidgetSlotAnchors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin WidgetSlotOffsets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D WidgetSlotPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D WidgetSlotSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool WidgetSlotAutoSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D WidgetSlotAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 WidgetSlotZOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGDragWidget* ChildLinkWidget;

public:
	UDragDropOperation_Widget();
};

FORCEINLINE uint32 GetTypeHash(const UDragDropOperation_Widget) { return 0; }
