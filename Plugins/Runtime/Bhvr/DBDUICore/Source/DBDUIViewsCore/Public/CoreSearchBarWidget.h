#pragma once

#include "CoreMinimal.h"
#include "SearchBarViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "Input/Events.h"
#include "Types/SlateEnums.h"
#include "CoreSearchBarWidget.generated.h"

class UEditableTextBox;
class UDBDButton;
class UDBDImage;

UCLASS(Blueprintable, EditInlineNew)
class UCoreSearchBarWidget : public UCoreBaseUserWidget, public ISearchBarViewInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UEditableTextBox* InputTextBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDButton* KeyboardButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDButton* ClearButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDImage* SearchIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _useAlphaNumericKeyboard;

protected:
	UFUNCTION()
	void SimulateExtraClick(FPointerEvent mouseDownEvent);

	UFUNCTION(BlueprintCallable)
	void OnTextInputEntered();

	UFUNCTION(BlueprintCallable)
	void OnTextInputChanged();

	UFUNCTION(BlueprintCallable)
	void OnTextCommitted(const FText& inText, TEnumAsByte<ETextCommit::Type> inCommitType);

	UFUNCTION(BlueprintCallable)
	void OnTextChanged(const FText& inText);

	UFUNCTION(BlueprintCallable)
	void OnKeyboardButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnKeyboadButtonUnhovered();

	UFUNCTION(BlueprintCallable)
	void OnKeyboadButtonHovered();

	UFUNCTION(BlueprintCallable)
	void OnClearButtonClicked();

	UFUNCTION(BlueprintCallable)
	FText GetEnteredText() const;

public:
	UCoreSearchBarWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreSearchBarWidget) { return 0; }
