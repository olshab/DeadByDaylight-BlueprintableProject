#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UIAnalyticsManager.generated.h"

UCLASS(Blueprintable)
class DBDUIMANAGERS_API UUIAnalyticsManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UUIAnalyticsManager();
};

FORCEINLINE uint32 GetTypeHash(const UUIAnalyticsManager) { return 0; }
