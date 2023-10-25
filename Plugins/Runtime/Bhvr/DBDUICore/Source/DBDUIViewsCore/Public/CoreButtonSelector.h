#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CoreButtonSelector.generated.h"

class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreButtonSelector : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnselectedDelegate, UCoreSelectableButtonWidget*, unselectedButton);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedDelegate, UCoreSelectableButtonWidget*, selectedButton);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedAgainDelegate, UCoreSelectableButtonWidget*, selectedButton);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnSelectedDelegate OnSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnSelectedAgainDelegate OnSelectedAgainDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnUnselectedDelegate OnUnselectedDelegate;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UCoreSelectableButtonWidget*> _buttons;

public:
	UFUNCTION(BlueprintCallable)
	void UnselectCurrent();

	UFUNCTION(BlueprintCallable)
	void SetInputsEnabled(bool enabled);

	UFUNCTION(BlueprintCallable)
	void SetAllEnabled(bool enabled);

	UFUNCTION(BlueprintCallable)
	bool SelectPrevious();

	UFUNCTION(BlueprintCallable)
	bool SelectNext();

	UFUNCTION(BlueprintCallable)
	bool Select(UCoreSelectableButtonWidget* buttonToSelect, bool performAction);

private:
	UFUNCTION(BlueprintCallable)
	void OnButtonSelectedChanged(UCoreSelectableButtonWidget* selectedButton, bool isSelected);

	UFUNCTION(BlueprintCallable)
	void OnButtonSelectedAgain(UCoreSelectableButtonWidget* selectedButton);

public:
	UFUNCTION(BlueprintPure)
	bool HasSelection() const;

public:
	UCoreButtonSelector();
};

FORCEINLINE uint32 GetTypeHash(const UCoreButtonSelector) { return 0; }
