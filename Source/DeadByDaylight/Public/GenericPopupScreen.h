#pragma once

#include "CoreMinimal.h"
#include "BasePopupScreen.h"
#include "GenericPopupScreen.generated.h"

class UUMGGenericPopup;

UCLASS(Blueprintable)
class UGenericPopupScreen : public UBasePopupScreen
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UUMGGenericPopup* _popup;

private:
	UFUNCTION(BlueprintCallable)
	void OnChoiceSelected(int32 selectedButtonType);

public:
	UGenericPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UGenericPopupScreen) { return 0; }
