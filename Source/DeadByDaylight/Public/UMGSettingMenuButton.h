#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGSettingMenuButton.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGSettingMenuButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetTabButtonText(const FText& buttonText);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIsSelected(bool isSelected);

protected:
	UFUNCTION(BlueprintCallable)
	void HandleSettingTabButtonClick();

public:
	UUMGSettingMenuButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingMenuButton) { return 0; }
