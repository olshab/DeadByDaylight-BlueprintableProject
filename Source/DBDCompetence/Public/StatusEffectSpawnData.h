#pragma once

#include "CoreMinimal.h"
#include "EPawnType.h"
#include "Templates/SubclassOf.h"
#include "EStatusEffectSpawnerReceiverStrategy.h"
#include "StatusEffectSpawnData.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FStatusEffectSpawnData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> EffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CustomParam;

	UPROPERTY(EditAnywhere)
	EStatusEffectSpawnerReceiverStrategy ReceiverStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPawnType PawnType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SkipOriginatingPlayer;

public:
	DBDCOMPETENCE_API FStatusEffectSpawnData();
};

FORCEINLINE uint32 GetTypeHash(const FStatusEffectSpawnData) { return 0; }
