#pragma once

#include "CoreMinimal.h"
#include "CreditsViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CreditsBackActionDelegate.h"
#include "CoreCreditsWidget.generated.h"

class UUITweenInstance;
class UDBDRichTextBlock;
class UCoreInputSwitcherWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreCreditsWidget : public UCoreBaseUserWidget, public ICreditsViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ScrollSpeed;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreInputSwitcherWidget* BackInputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* CreditsTextBlock;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCreditsBackActionDelegate _backActionDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UUITweenInstance* _tween;

private:
	UFUNCTION(BlueprintCallable)
	void ScrollText();

	UFUNCTION(BlueprintCallable)
	void OnScrollEnd(UUITweenInstance* tween);

public:
	UCoreCreditsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCreditsWidget) { return 0; }
