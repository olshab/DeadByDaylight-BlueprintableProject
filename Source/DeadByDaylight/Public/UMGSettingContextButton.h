#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnSettingMenuButtonClickEvent.h"
#include "UMGSettingContextButton.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGSettingContextButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnSettingMenuButtonClickEvent OnSettingContextButtonClickEvent;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIsSelected(bool isSelected);

	UFUNCTION(BlueprintCallable)
	void SetContextButtonData(int32 buttonID);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetButtonText(const FString& buttonText);

protected:
	UFUNCTION(BlueprintCallable)
	void HandleSettingContextButtonClick();

public:
	UFUNCTION(BlueprintCallable)
	int32 GetContextButtonData();

public:
	UUMGSettingContextButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingContextButton) { return 0; }
