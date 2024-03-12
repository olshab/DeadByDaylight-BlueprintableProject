#pragma once

#include "CoreMinimal.h"
#include "LobbyCharactersViewInterface.h"
#include "LobbyCharactersTabSelectedDelegate.h"
#include "CoreBaseUserWidget.h"
#include "CoreLobbyCharactersWidget.generated.h"

class UWidgetSwitcher;
class UCoreTabContainerWidget;
class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreLobbyCharactersWidget : public UCoreBaseUserWidget, public ILobbyCharactersViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLobbyCharactersTabSelectedDelegate _subTabSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UWidgetSwitcher* WidgetSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreTabContainerWidget* SubTabContainer;

private:
	UFUNCTION(BlueprintCallable)
	void OnSubTabSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UCoreLobbyCharactersWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreLobbyCharactersWidget) { return 0; }
