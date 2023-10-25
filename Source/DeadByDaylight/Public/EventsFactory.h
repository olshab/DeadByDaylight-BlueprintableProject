#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EventsFactory.generated.h"

UCLASS(Blueprintable)
class UEventsFactory : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UEventsFactory();
};

FORCEINLINE uint32 GetTypeHash(const UEventsFactory) { return 0; }
