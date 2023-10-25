#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayTagContainer.h"
#include "DailyRitualPossibleCharacters.h"
#include "EDBDScoreTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "DailyRitualDefinition.generated.h"

class URitualEvaluatorBase;

USTRUCT(BlueprintType)
struct FDailyRitualDefinition: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RitualId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDailyRitualPossibleCharacters PossibleCharacters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EDBDScoreTypes> TrackedEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayTag> TrackedGameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<URitualEvaluatorBase> Evaluator;

public:
	DEADBYDAYLIGHT_API FDailyRitualDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRitualDefinition) { return 0; }
