#pragma once

#include "CoreMinimal.h"
#include "OnCompendiumClickedDelegate.h"
#include "ArchiveCompendiumViewInterface.h"
#include "CoreTabContentWidget.h"
#include "Templates/SubclassOf.h"
#include "CoreArchiveCompendiumWidget.generated.h"

class UCoreArchiveCompendiumButtonWidget;
class UGridPanel;
class UGridSlot;
class UDBDScrollBox;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveCompendiumWidget : public UCoreTabContentWidget, public IArchiveCompendiumViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UCoreArchiveCompendiumButtonWidget> _compendiumButtonWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnCompendiumClickedDelegate _onCompendiumClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UGridPanel* CompendiumGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDScrollBox* CompendiumScroll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _cellsPerRow;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreArchiveCompendiumButtonWidget*> _compendiumButtonWidgetPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreArchiveCompendiumButtonWidget*> _compendiumButtonWidgetList;

private:
	UFUNCTION(BlueprintCallable)
	void SetGridSlot(UGridSlot* gridSlot, int32 index);

public:
	UFUNCTION(BlueprintCallable)
	void ResetScroll();

private:
	UFUNCTION(BlueprintCallable)
	void Reset();

protected:
	UFUNCTION(BlueprintCallable)
	void OnPastStoryClicked(UCoreButtonWidget* button);

private:
	UFUNCTION(BlueprintCallable)
	void CreateGhostStories(const int32 currentStoryNum);

	UFUNCTION(BlueprintCallable)
	UCoreArchiveCompendiumButtonWidget* CreateAndAddButtonToGrid(int32 index);

public:
	UCoreArchiveCompendiumWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveCompendiumWidget) { return 0; }
