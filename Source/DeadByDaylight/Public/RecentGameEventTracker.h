#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RecentGameEventTracker.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API URecentGameEventTracker : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	URecentGameEventTracker();
};

FORCEINLINE uint32 GetTypeHash(const URecentGameEventTracker) { return 0; }
