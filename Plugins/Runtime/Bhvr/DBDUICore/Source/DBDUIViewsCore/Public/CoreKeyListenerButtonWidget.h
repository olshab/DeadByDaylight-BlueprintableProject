#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "CoreButtonWidget.h"
#include "EUIActionType.h"
#include "CoreKeyListenerButtonWidget.generated.h"

class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UCoreKeyListenerButtonWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsKeyboardLabelVisible;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* InputNameTB;

public:
	UFUNCTION(BlueprintCallable)
	void SetUIAction(const EUIActionType actionType);

	UFUNCTION(BlueprintCallable)
	void SetKeyOverride(const FKey keyOverride);

public:
	UCoreKeyListenerButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreKeyListenerButtonWidget) { return 0; }
