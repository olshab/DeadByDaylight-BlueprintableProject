#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ScreenIndicatorsContainerViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreScreenIndicatorsContainerWidget.generated.h"

class UCanvasPanel;
class UCoreScreenIndicatorWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreScreenIndicatorsContainerWidget : public UCoreBaseHudWidget, public IScreenIndicatorsContainerViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InactiveThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* Container;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreScreenIndicatorWidget> ScreenIndicatorClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<FString, UCoreScreenIndicatorWidget*> _screenIndicatorsMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreScreenIndicatorWidget*> _screenIndicatorsPool;

protected:
	UFUNCTION(BlueprintCallable)
	TMap<FString, UCoreScreenIndicatorWidget*> GetScreenIndicatorsMap();

	UFUNCTION(BlueprintPure)
	FString FindScreenIndicatorKey(UCoreScreenIndicatorWidget* value) const;

public:
	UCoreScreenIndicatorsContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreScreenIndicatorsContainerWidget) { return 0; }
