#pragma once

#include "CoreMinimal.h"
#include "LightSensitivityViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreLightSensitivityWidget.generated.h"

class UDBDRichTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreLightSensitivityWidget : public UCoreBaseUserWidget, public ILightSensitivityViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UDBDRichTextBlock*> _lightSensitivityRichTextBlocks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UWidgetAnimation* FadeOutAnim;

public:
	UCoreLightSensitivityWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreLightSensitivityWidget) { return 0; }
