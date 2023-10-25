#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreCharactersSelectionViewInterface.h"
#include "StoreCharacterSelectedDelegate.h"
#include "Templates/SubclassOf.h"
#include "CoreStoreCharactersSelectionWidget.generated.h"

class UCoreSelectableButtonWidget;
class UCoreStoreCharacterItemWidget;
class UUniformGridPanel;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersSelectionWidget : public UCoreBaseUserWidget, public IStoreCharactersSelectionViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCharacterSelectedDelegate _characterSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreCharacterItemWidget> _tileWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numberOfColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _tileScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UScrollBox* Scroll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUniformGridPanel* Container;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UCoreStoreCharacterItemWidget*> _tiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UCoreStoreCharacterItemWidget* _selectedTile;

protected:
	UFUNCTION(BlueprintCallable)
	void OnCharacterSelected(UCoreSelectableButtonWidget* buttonTarget, bool isSelected);

public:
	UCoreStoreCharactersSelectionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersSelectionWidget) { return 0; }
