#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "RoleSelectionScreen.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API URoleSelectionScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnEventButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnChangeUserButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnButtonSelected(int32 buttonId);

public:
	URoleSelectionScreen();
};

FORCEINLINE uint32 GetTypeHash(const URoleSelectionScreen) { return 0; }
