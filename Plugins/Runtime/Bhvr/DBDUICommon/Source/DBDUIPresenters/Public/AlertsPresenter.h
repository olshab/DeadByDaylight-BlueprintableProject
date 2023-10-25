#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseAlertPresenter.h"
#include "AlertsPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UAlertsPresenter : public UBaseAlertPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> AlertsWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	void OnRewardAlertSequenceCompleted();

public:
	UAlertsPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UAlertsPresenter) { return 0; }
