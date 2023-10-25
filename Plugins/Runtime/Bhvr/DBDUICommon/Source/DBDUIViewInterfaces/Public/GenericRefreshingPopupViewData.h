#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "GenericRefreshingPopupViewData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UGenericRefreshingPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RefreshingIntervalsTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeoutTime;

public:
	UGenericRefreshingPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UGenericRefreshingPopupViewData) { return 0; }
