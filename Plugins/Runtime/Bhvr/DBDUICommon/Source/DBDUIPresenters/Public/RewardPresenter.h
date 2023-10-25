#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseAlertPresenter.h"
#include "RewardPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API URewardPresenter : public UBaseAlertPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> RewardWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	void OnOkAction();

public:
	URewardPresenter();
};

FORCEINLINE uint32 GetTypeHash(const URewardPresenter) { return 0; }
