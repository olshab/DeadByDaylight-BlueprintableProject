#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "OnboardingBotMatchDefinition.generated.h"

USTRUCT(BlueprintType)
struct FOnboardingBotMatchDefinition: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DefaultMapId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DefaultSurvivorId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DefaultKillerId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> DefaultBotsId;

public:
	ONBOARDING_API FOnboardingBotMatchDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FOnboardingBotMatchDefinition) { return 0; }
