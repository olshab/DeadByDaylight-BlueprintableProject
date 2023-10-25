#pragma once

#include "CoreMinimal.h"
#include "ModifierReplicatedEventConditionData.generated.h"

class UEventDrivenModifierCondition;

USTRUCT(BlueprintType)
struct FModifierReplicatedEventConditionData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UEventDrivenModifierCondition* EventDrivenCondition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasCondition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AuthorityDataSet;

public:
	COMPETENCE_API FModifierReplicatedEventConditionData();
};

FORCEINLINE uint32 GetTypeHash(const FModifierReplicatedEventConditionData) { return 0; }
