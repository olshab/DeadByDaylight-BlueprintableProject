#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArchiveEditorViewInterface.h"
#include "CoreArchiveQuestMapWidget.h"
#include "EEditorMode.h"
#include "TomeQuestEditorSaveDelegate.h"
#include "LinePair.h"
#include "CoreArchiveQuestEditorWidget.generated.h"

class UVerticalBox;
class UCoreArchiveQuestNodeWidget;
class UCoreButtonWidget;
class UCheckBox;
class UCoreKeyListenerButtonWidget;
class UBorder;
class UEditableTextBox;
class UCoreArchiveQuestPathWidget;
class UOverlay;
class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveQuestEditorWidget : public UCoreArchiveQuestMapWidget, public IArchiveEditorViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FLinePair> _gridLinesListVertical;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FLinePair> _gridLinesListHorizontal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreArchiveQuestNodeWidget* _activeNode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreArchiveQuestPathWidget* _pathInCreation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTomeQuestEditorSaveDelegate _questEditorSaveDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCreatingPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UBorder* EditorBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCheckBox* MoveNodesRadioCheckbox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCheckBox* LinkNodesRadioCheckbox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCheckBox* GridVisibilityCheckbox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCheckBox* SnapGridCheckbox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UEditableTextBox* GridTileWidthInputPixelsTextBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UEditableTextBox* GridTileWidthInputPercentTextBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UEditableTextBox* GridTileHeightInputPixelsTextBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UEditableTextBox* GridTileHeightInputPercentTextBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreKeyListenerButtonWidget* RefreshGridButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UOverlay* NodeCoordinateContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UEditableTextBox* NodeXInputPixels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UEditableTextBox* NodeXInputPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UEditableTextBox* NodeYInputPixels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UEditableTextBox* NodeYInputPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreKeyListenerButtonWidget* SubmitButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreKeyListenerButtonWidget* SaveQuestMapButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* SaveInfoContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* PathTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GridTileHeightValuePercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GridTileWidthValuePercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSnapping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsGridVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEditorMode Mode;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetHighlightedGridLines(int32 verticalIndex, int32 horizontalIndex);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetGridLinesArray(const TArray<FLinePair>& gridArrayVertical, const TArray<FLinePair>& gridArrayHorizontal);

private:
	UFUNCTION(BlueprintCallable)
	void OnSnapGridChecked(bool checked);

	UFUNCTION(BlueprintCallable)
	void OnSaveGraphClick(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnRefreshGridClick(UCoreButtonWidget* buttonTarget);

protected:
	UFUNCTION(BlueprintCallable)
	void OnPathClicked(UCoreButtonWidget* buttonTarget);

private:
	UFUNCTION(BlueprintCallable)
	void OnNodeYPixelChanged(const FText& text);

	UFUNCTION(BlueprintCallable)
	void OnNodeYPercentChanged(const FText& text);

	UFUNCTION(BlueprintCallable)
	void OnNodeXPixelChanged(const FText& text);

	UFUNCTION(BlueprintCallable)
	void OnNodeXPercentChanged(const FText& text);

	UFUNCTION(BlueprintCallable)
	void OnNodeSubmitClick(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnNodeBeginDrag(const FName& id);

	UFUNCTION(BlueprintCallable)
	void OnMoveNodesModeChecked(bool checked);

	UFUNCTION(BlueprintCallable)
	void OnLinkNodesModeChecked(bool checked);

	UFUNCTION(BlueprintCallable)
	void OnGridVisbilityChecked(bool checked);

	UFUNCTION(BlueprintCallable)
	void OnGridTileWidthPixelChanged(const FText& text);

	UFUNCTION(BlueprintCallable)
	void OnGridTileWidthPercentChanged(const FText& text);

	UFUNCTION(BlueprintCallable)
	void OnGridTileHeightPixelChanged(const FText& text);

	UFUNCTION(BlueprintCallable)
	void OnGridTileHeightPercentChanged(const FText& text);

protected:
	UFUNCTION(BlueprintCallable)
	void NodeDragged(const FVector2D& position);

	UFUNCTION(BlueprintCallable)
	void IntermediatePathMove(const FVector2D& position);

public:
	UCoreArchiveQuestEditorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveQuestEditorWidget) { return 0; }
