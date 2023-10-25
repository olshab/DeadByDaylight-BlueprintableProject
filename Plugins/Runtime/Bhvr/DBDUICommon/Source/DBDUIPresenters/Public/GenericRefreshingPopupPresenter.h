#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "GenericRefreshingPopupPresenter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UGenericRefreshingPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultRefreshingIntervalsTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultTimeoutTime;

public:
	UGenericRefreshingPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UGenericRefreshingPopupPresenter) { return 0; }
