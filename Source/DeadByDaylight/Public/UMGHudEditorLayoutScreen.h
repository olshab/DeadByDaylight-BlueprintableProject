#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGHudEditorLayoutScreen.generated.h"

class UUMGDragWidget_HudEditor;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGHudEditorLayoutScreen : public UUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UUMGDragWidget_HudEditor*> _editableWidgets;

public:
	UUMGHudEditorLayoutScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGHudEditorLayoutScreen) { return 0; }
