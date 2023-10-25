#pragma once

#include "CoreMinimal.h"
#include "AIGoal.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FAIGoal
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* MetaGoal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* Goal;

public:
	DBDBOTS_API FAIGoal();
};

FORCEINLINE uint32 GetTypeHash(const FAIGoal) { return 0; }
