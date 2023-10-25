#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SubscriptionSubsystem.generated.h"

UCLASS(Blueprintable)
class SUBSCRIPTIONSUBSYSTEM_API USubscriptionSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	USubscriptionSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const USubscriptionSubsystem) { return 0; }
