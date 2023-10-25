#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "ProgressionSystemInfoPopupPresenter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UProgressionSystemInfoPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

public:
	UProgressionSystemInfoPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UProgressionSystemInfoPopupPresenter) { return 0; }
