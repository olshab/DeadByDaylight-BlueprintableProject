#pragma once

#include "CoreMinimal.h"
#include "EPopupButtonType.h"
#include "BasePopupPresenter.h"
#include "GenericPopupPresenter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UGenericPopupPresenter : public UBasePopupPresenter
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void OnBack();

	UFUNCTION(BlueprintCallable)
	void OnAppResumed(bool isAppResumed);

	UFUNCTION(BlueprintCallable)
	void OnAction(EPopupButtonType popupAction);

public:
	UGenericPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UGenericPopupPresenter) { return 0; }
