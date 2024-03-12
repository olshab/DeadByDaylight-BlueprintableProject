#pragma once

#include "CoreMinimal.h"
#include "HudDirectionalMiniGameViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "EDirectionalMiniGameType.h"
#include "Templates/SubclassOf.h"
#include "CoreHudDirectionalMiniGameWidget.generated.h"

class UCoreHudDirectionalMiniGameItemWidget;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreHudDirectionalMiniGameWidget : public UCoreBaseHudWidget, public IHudDirectionalMiniGameViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreHudDirectionalMiniGameItemWidget> SkullMerchantItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreHudDirectionalMiniGameItemWidget> WormholeItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* Container;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreHudDirectionalMiniGameItemWidget*> _widgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EDirectionalMiniGameType _currentType;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowVisual();

	UFUNCTION(BlueprintCallable)
	TArray<UCoreHudDirectionalMiniGameItemWidget*> GetWidgets();

	UFUNCTION(BlueprintPure)
	EDirectionalMiniGameType GetCurrentType() const;

public:
	UCoreHudDirectionalMiniGameWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreHudDirectionalMiniGameWidget) { return 0; }
