#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGEndGameCollapseProgressWidget.generated.h"

class UProgressBar;
class UCanvasPanel;
class UHorizontalBoxSlot;

UCLASS(Blueprintable, EditInlineNew)
class UUMGEndGameCollapseProgressWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* MarkerLeftCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* MarkerRightCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UHorizontalBoxSlot* _markerLeftBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UHorizontalBoxSlot* _markerRightBox;

public:
	UUMGEndGameCollapseProgressWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGEndGameCollapseProgressWidget) { return 0; }
