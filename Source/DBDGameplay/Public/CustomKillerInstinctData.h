#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CustomKillerInstinctData.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FCustomKillerInstinctData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UNiagaraSystem* ParticleSystemAsset;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> SurvivorStateTags;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> KillerStateTags;

public:
	DBDGAMEPLAY_API FCustomKillerInstinctData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomKillerInstinctData) { return 0; }
