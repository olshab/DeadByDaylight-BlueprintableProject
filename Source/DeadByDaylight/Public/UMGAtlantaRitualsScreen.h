#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaRitualsScreen.generated.h"

class UUMGAtlantaRitualTab;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaRitualsScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGAtlantaRitualTab* DailyTab;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGAtlantaRitualTab* WeeklyTab;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _atlantaRitualTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _endInLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _dailyButtonLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _weeklyButtonLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _dailyRemainingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _weeklyRemainingTime;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetNewRitualNumbers(int32 newDailyRitualNumber, int32 newWeeklyRitualNumber);

private:
	UFUNCTION(BlueprintCallable)
	void BroadcastOnClaimRewardButtonPressed(const int32 ritualId);

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastOnBackButtonPressed();

public:
	UUMGAtlantaRitualsScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaRitualsScreen) { return 0; }
