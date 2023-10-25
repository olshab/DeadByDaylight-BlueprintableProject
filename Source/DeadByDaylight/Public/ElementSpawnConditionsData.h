#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "SpawnConditions.h"
#include "ETileSpawnPointType.h"
#include "EGameplayElementType.h"
#include "ElementSpawnConditionsData.generated.h"

USTRUCT(BlueprintType)
struct FElementSpawnConditionsData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ETileSpawnPointType, FSpawnConditions> DependencyElementConditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EGameplayElementType, FSpawnConditions> GameplayElementConditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSpawnConditions OtherSelvesConditions;

public:
	DEADBYDAYLIGHT_API FElementSpawnConditionsData();
};

FORCEINLINE uint32 GetTypeHash(const FElementSpawnConditionsData) { return 0; }
