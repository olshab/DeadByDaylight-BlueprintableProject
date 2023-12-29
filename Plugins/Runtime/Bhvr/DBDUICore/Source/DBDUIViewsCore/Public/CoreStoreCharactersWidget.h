#pragma once

#include "CoreMinimal.h"
#include "StoreCharactersViewInterface.h"
#include "CoreStoreBaseSubTabsWidget.h"
#include "CoreStoreCharactersWidget.generated.h"

class UDBDTextBlock;
class UCoreStoreCharacterPerksToastWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersWidget : public UCoreStoreBaseSubTabsWidget, public IStoreCharactersViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* SelectedCharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreStoreCharacterPerksToastWidget* PerksToast;

public:
	UCoreStoreCharactersWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersWidget) { return 0; }
