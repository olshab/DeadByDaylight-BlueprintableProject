#pragma once

#include "CoreMinimal.h"
#include "WatermarkViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreWatermarkWidget.generated.h"

class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreWatermarkWidget : public UCoreBaseUserWidget, public IWatermarkViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UDBDTextBlock*> _watermarkDBDTextBlocks;

protected:
	UFUNCTION(BlueprintCallable)
	void UpdateWatermarkText();

public:
	UCoreWatermarkWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreWatermarkWidget) { return 0; }
