#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedCharacterViewData.h"
#include "CoreSelectableButtonWidget.h"
#include "OnTransitionButtonClickedDelegate.h"
#include "CoreStoreFeaturedCharacterWidget.generated.h"

class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreFeaturedCharacterWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnTransitionButtonClickedDelegate OnTransitionButtonClickedDelegate;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreButtonWidget* TransitionButton;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCharacterData(const FStoreFeaturedCharacterViewData& characterData);

	UFUNCTION(BlueprintCallable)
	FStoreFeaturedCharacterViewData GetCharacterViewData();

public:
	UCoreStoreFeaturedCharacterWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreFeaturedCharacterWidget) { return 0; }
