#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "NewActiveTomePopupPresenter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UNewActiveTomePopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnRiftButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnCurrentTomeButtonClicked();

public:
	UNewActiveTomePopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UNewActiveTomePopupPresenter) { return 0; }
