#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "PlayerLevelViewData.h"
#include "CorePlayerExpGaugeWidget.generated.h"

class UUITweenInstance;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerExpGaugeWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_DELEGATE(FOnPlayerExpUpdateCompleted);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOnPlayerExpUpdateCompleted _onPlayerExpUpdateCompletedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText XpText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ProgressText;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetViewData(const FPlayerLevelViewData& playerViewData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnUpdateProgress(UUITweenInstance* tween);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnUpdateComplete(UUITweenInstance* tween);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Add(const int32 bonusXp);

public:
	UCorePlayerExpGaugeWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerExpGaugeWidget) { return 0; }
