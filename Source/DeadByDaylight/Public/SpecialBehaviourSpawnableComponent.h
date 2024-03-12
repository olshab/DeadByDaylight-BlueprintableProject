#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "SpecialBehaviourSpawnableComponent.generated.h"

class UActorComponent;
class ADBDPlayer;

USTRUCT(BlueprintType)
struct FSpecialBehaviourSpawnableComponent
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
	TArray<TSoftClassPtr<ADBDPlayer>> ShouldSpawnOnPlayerClasses;

public:
	DEADBYDAYLIGHT_API FSpecialBehaviourSpawnableComponent();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialBehaviourSpawnableComponent) { return 0; }
