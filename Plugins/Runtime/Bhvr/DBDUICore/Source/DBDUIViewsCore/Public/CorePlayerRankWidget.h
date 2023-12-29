#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "RankViewData.h"
#include "CoreRankWidgetConfiguration.h"
#include "CorePlayerRankWidget.generated.h"

class UDBDImage;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerRankWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCoreRankWidgetConfiguration _widgetConfiguration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _showTooltipOnHover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* LevelBG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* RankNumberImage;

public:
	UFUNCTION(BlueprintCallable)
	void SetRankImageAndText(const int32 rankIndex, const bool isKiller);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FRankViewData& data);

protected:
	UFUNCTION(BlueprintPure)
	FCoreRankWidgetConfiguration GetConfiguration() const;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AnimateRankUp();

public:
	UCorePlayerRankWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerRankWidget) { return 0; }
