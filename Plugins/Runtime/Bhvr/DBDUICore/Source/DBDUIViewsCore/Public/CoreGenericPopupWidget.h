#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewInterface.h"
#include "CoreBasePopupWidget.h"
#include "PopupBackActionDelegate.h"
#include "PopupAction.h"
#include "CoreGenericPopupWidget.generated.h"

class UCoreInputSwitcherWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreGenericPopupWidget : public UCoreBasePopupWidget, public IGenericPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* ProgressionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* RegressionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* AlternativeButton;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FPopupAction _popupActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FPopupBackActionDelegate _popupBackActionDelegate;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRegressionAction();

	UFUNCTION(BlueprintCallable)
	void OnProgressionAction();

	UFUNCTION(BlueprintCallable)
	void OnAlternativeAction();

public:
	UCoreGenericPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreGenericPopupWidget) { return 0; }
