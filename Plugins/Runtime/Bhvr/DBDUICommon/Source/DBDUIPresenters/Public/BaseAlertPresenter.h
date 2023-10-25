#pragma once

#include "CoreMinimal.h"
#include "EContext.h"
#include "Presenter.h"
#include "BaseAlertPresenter.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIPRESENTERS_API UBaseAlertPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EContext ObservedContext;

protected:
	UFUNCTION(BlueprintCallable)
	void OnContextLeave(EContext context);

	UFUNCTION(BlueprintCallable)
	void OnContextEnter(EContext context);

	UFUNCTION(BlueprintCallable)
	bool IsContextEntered() const;

public:
	UBaseAlertPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UBaseAlertPresenter) { return 0; }
