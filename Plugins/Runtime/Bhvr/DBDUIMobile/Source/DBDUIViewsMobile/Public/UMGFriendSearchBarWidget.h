#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGFriendSearchBarWidget.generated.h"

class UUMGBaseButtonWidget;
class UEditableTextBox;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGFriendSearchBarWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UEditableTextBox* InputTextField;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* SearchButton;

private:
	UFUNCTION(BlueprintCallable)
	void HandleTextInputChanged(const FText& textInput);

	UFUNCTION(BlueprintCallable)
	void HandleSearchButtonClicked();

public:
	UUMGFriendSearchBarWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendSearchBarWidget) { return 0; }
