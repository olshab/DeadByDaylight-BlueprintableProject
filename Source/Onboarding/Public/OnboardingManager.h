#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnboardingManager.generated.h"

UCLASS(Blueprintable)
class ONBOARDING_API UOnboardingManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UOnboardingManager();
};

FORCEINLINE uint32 GetTypeHash(const UOnboardingManager) { return 0; }
