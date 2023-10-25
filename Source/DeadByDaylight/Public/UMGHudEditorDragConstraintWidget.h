#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGHudEditorDragConstraintWidget.generated.h"

class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGHudEditorDragConstraintWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	USizeBox* LinkSizeBox;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUserWidget* _childWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUserWidget* _parentWidget;

public:
	UUMGHudEditorDragConstraintWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGHudEditorDragConstraintWidget) { return 0; }
