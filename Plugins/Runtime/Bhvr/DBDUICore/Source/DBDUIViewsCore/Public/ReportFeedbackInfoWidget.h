#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ReportFeedbackData.h"
#include "ReportFeedbackInfoWidget.generated.h"

class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UReportFeedbackInfoWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* BanTimestampTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* ReasonTB;

public:
	UFUNCTION(BlueprintCallable)
	void SetData(const FReportFeedbackData& reportData);

public:
	UReportFeedbackInfoWidget();
};

FORCEINLINE uint32 GetTypeHash(const UReportFeedbackInfoWidget) { return 0; }
