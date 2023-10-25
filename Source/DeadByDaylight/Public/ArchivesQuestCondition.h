#pragma once

#include "CoreMinimal.h"
#include "ArchivesQuestCondition.generated.h"

USTRUCT(BlueprintType)
struct FArchivesQuestCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Value;

public:
	DEADBYDAYLIGHT_API FArchivesQuestCondition();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesQuestCondition) { return 0; }
