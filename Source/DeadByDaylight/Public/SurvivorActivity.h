#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SurvivorActivity.generated.h"

USTRUCT(BlueprintType)
struct FSurvivorActivity
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldDisplayProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayTag> TagsAssociatedWithAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag ActivityType;

public:
	DEADBYDAYLIGHT_API FSurvivorActivity();
};

FORCEINLINE uint32 GetTypeHash(const FSurvivorActivity) { return 0; }
