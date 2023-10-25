#pragma once

#include "CoreMinimal.h"
#include "EQuestProgressionType.h"
#include "DBDTableRowBaseWithId.h"
#include "ArchiveQuestObjectiveDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArchiveQuestObjectiveDefinition: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText RulesDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EQuestProgressionType ProgressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> DescriptionParameters;

public:
	DEADBYDAYLIGHT_API FArchiveQuestObjectiveDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveQuestObjectiveDefinition) { return 0; }
