#pragma once

#include "CoreMinimal.h"
#include "BHVRAnalytics.h"
#include "DBDAnalytics.generated.h"

UCLASS(Blueprintable)
class UDBDAnalytics : public UBHVRAnalytics
{
	GENERATED_BODY()

public:
	UDBDAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAnalytics) { return 0; }
