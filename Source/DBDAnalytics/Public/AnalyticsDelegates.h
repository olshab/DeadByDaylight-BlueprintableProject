#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AnalyticsDelegates.generated.h"

UCLASS(Blueprintable)
class UAnalyticsDelegates : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UAnalyticsDelegates();
};

FORCEINLINE uint32 GetTypeHash(const UAnalyticsDelegates) { return 0; }
