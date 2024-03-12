#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "Templates/SubclassOf.h"
#include "EventObjectiveTrackerViewData.h"
#include "EventObjectiveTrackerWidget.generated.h"

class UDBDTextBlock;
class UEventObjectiveTrackerTarget;
class UDBDRichTextBlock;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class UEventObjectiveTrackerWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* NextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* ProgressRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* TargetsPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UEventObjectiveTrackerTarget> _eventObjectiveTrackerTargetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _maxTargets;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UEventObjectiveTrackerTarget*> _targetPool;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTargetPosition(const UEventObjectiveTrackerTarget* target, float relativePosition);

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FEventObjectiveTrackerViewData& viewData);

public:
	UEventObjectiveTrackerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventObjectiveTrackerWidget) { return 0; }
