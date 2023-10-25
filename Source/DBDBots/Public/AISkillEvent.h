#pragma once

#include "CoreMinimal.h"
#include "AISkillEvent.generated.h"

class UAISkill;

USTRUCT(BlueprintType)
struct FAISkillEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> SpecialEventIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UAISkill* Skill;

public:
	DBDBOTS_API FAISkillEvent();
};

FORCEINLINE uint32 GetTypeHash(const FAISkillEvent) { return 0; }
