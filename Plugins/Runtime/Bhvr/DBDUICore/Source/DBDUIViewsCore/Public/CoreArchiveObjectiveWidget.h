#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ArchiveNodeObjectiveViewData.h"
#include "CoreArchiveObjectiveWidget.generated.h"

class UDBDRichTextBlock;
class UDBDImage;
class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveObjectiveWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* ObjectiveDescriptionRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* CurrentProgressTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* MaxProgressTB;

public:
	UFUNCTION(BlueprintCallable)
	void SetData(const FArchiveNodeObjectiveViewData& objectiveData);

public:
	UCoreArchiveObjectiveWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveObjectiveWidget) { return 0; }
