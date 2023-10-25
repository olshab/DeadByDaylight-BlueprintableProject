#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UMGDragWidget.h"
#include "UMGDragWidget_HudEditor.generated.h"

class UUserWidget;
class UUMGHudEditorDragConstraintWidget;
class UCustomWidgetWrapper_HudEditor;
class UUMGDragWidget_HudEditor;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGDragWidget_HudEditor : public UUMGDragWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> OnSelectionWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUMGHudEditorDragConstraintWidget> DragLinkWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCustomWidgetWrapper_HudEditor* _customWrapper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUserWidget* _selectionWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGHudEditorDragConstraintWidget* _dragLinkWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGDragWidget_HudEditor* _parentLinkWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGDragWidget_HudEditor* _childLinkWidget;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetOnSelection(bool isSelected);

	UFUNCTION(BlueprintPure)
	UCustomWidgetWrapper_HudEditor* GetCustomWrapper() const;

public:
	UUMGDragWidget_HudEditor();
};

FORCEINLINE uint32 GetTypeHash(const UUMGDragWidget_HudEditor) { return 0; }
