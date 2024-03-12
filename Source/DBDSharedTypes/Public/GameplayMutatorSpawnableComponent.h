#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "GameplayMutatorSpawnableComponent.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FGameplayMutatorSpawnableComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UActorComponent> Component;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldSpawnOnSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldSpawnOnKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldSpawnOnGameState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CustomParam;

public:
	DBDSHAREDTYPES_API FGameplayMutatorSpawnableComponent();
};

FORCEINLINE uint32 GetTypeHash(const FGameplayMutatorSpawnableComponent) { return 0; }
