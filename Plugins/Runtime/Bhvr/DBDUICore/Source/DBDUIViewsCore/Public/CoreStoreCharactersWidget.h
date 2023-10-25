#pragma once

#include "CoreMinimal.h"
#include "StoreCharactersMenuTabSelectedDelegate.h"
#include "StoreCharactersViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreStoreCharactersWidget.generated.h"

class UCoreTabContainerWidget;
class UDBDTextBlock;
class UCoreSelectableButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersWidget : public UCoreBaseUserWidget, public IStoreCharactersViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCoreTabContainerWidget* MenuTabs;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCharactersMenuTabSelectedDelegate _menuTabSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* SelectedCharacterName;

protected:
	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelectedAgain(UCoreSelectableButtonWidget* selectedButton);

	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UCoreStoreCharactersWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersWidget) { return 0; }
