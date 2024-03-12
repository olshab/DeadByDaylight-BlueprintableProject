#pragma once

#include "CoreMinimal.h"
#include "EFlagSize.h"
#include "CoreBaseUserWidget.h"
#include "TimerFlagViewData.h"
#include "CoreTimerFlagWidget.generated.h"

class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UCoreTimerFlagWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TimerTB;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTimerFlagViewData _cachedData;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateTimer(const FString& newTimer);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateFlagSize(EFlagSize flagSize);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FTimerFlagViewData& data);

protected:
	UFUNCTION(BlueprintCallable)
	void OnTimerTick(int32 remainingTime);

public:
	UFUNCTION(BlueprintCallable)
	void NativeDestruct();

	UFUNCTION(BlueprintPure)
	bool IsDataSet() const;

protected:
	UFUNCTION(BlueprintPure)
	FTimerFlagViewData GetCachedData();

public:
	UCoreTimerFlagWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreTimerFlagWidget) { return 0; }
