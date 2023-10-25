#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "UMGObjectivesWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGObjectivesWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility PanelEscapeRequirementsVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility PanelGeneratorVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility PanelFindExitVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility PanelHatchVisibility;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateTextMessage(const FText& textFind, const FText& textExit, const FText& textOr);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateGeneratorCount(int32 count);

public:
	UUMGObjectivesWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGObjectivesWidget) { return 0; }
