#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AbstractAnalyticsManager.generated.h"

UCLASS(Blueprintable, Abstract)
class DEADBYDAYLIGHT_API UAbstractAnalyticsManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UAbstractAnalyticsManager();
};

FORCEINLINE uint32 GetTypeHash(const UAbstractAnalyticsManager) { return 0; }
