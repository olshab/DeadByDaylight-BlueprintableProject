#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SubPresenter.generated.h"

UCLASS(Blueprintable, Abstract)
class DBDUIPRESENTERS_API USubPresenter : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void OnPresenterStopAsyncOperation();

	UFUNCTION(BlueprintCallable)
	void OnPresenterStartAsyncOperation();

public:
	USubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const USubPresenter) { return 0; }
