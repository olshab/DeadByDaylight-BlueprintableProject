#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "CoreToggleButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreToggleButtonWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DefaultToggleState;

public:
	UFUNCTION(BlueprintCallable)
	void SetToDefaultState();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetActiveVisualState(bool isActive);

	UFUNCTION(BlueprintPure)
	bool IsToggled() const;

public:
	UCoreToggleButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreToggleButtonWidget) { return 0; }
