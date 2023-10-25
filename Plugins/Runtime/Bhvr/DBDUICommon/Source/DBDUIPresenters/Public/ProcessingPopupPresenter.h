#pragma once

#include "CoreMinimal.h"
#include "BasePopupPresenter.h"
#include "ProcessingPopupPresenter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UProcessingPopupPresenter : public UBasePopupPresenter
{
	GENERATED_BODY()

public:
	UProcessingPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UProcessingPopupPresenter) { return 0; }
