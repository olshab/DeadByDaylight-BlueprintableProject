#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RootWidget.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API URootWidget : public UUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCanvasPanel* _canvasPanel;

public:
	URootWidget();
};

FORCEINLINE uint32 GetTypeHash(const URootWidget) { return 0; }
