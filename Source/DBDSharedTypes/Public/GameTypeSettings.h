#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EGameType.h"
#include "EGameTypeModifierName.h"
#include "TypeFlexibleTunable.h"
#include "GameplayMutatorSpawnableComponent.h"
#include "GameTypeSettings.generated.h"

USTRUCT(BlueprintType)
struct FGameTypeSettings: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameType GameType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EGameTypeModifierName, FTypeFlexibleTunable> Modifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameplayMutatorSpawnableComponent> Mutators;

public:
	DBDSHAREDTYPES_API FGameTypeSettings();
};

FORCEINLINE uint32 GetTypeHash(const FGameTypeSettings) { return 0; }
