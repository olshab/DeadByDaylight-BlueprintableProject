#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "GameplayTagContainer.h"
#include "ECharacterMovementTypes.h"
#include "AICharacterBehaviourInteractWithActorData.generated.h"

class AActor;

UCLASS(Blueprintable)
class UAICharacterBehaviourInteractWithActorData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AActor* TargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECharacterMovementTypes CharacterMovementType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool UsePathfinding;

public:
	UFUNCTION(BlueprintCallable)
	void WatchGameEventTypes(TArray<FGameplayTag> gameEventTypes);

	UFUNCTION(BlueprintCallable)
	void WatchGameEventType(FGameplayTag gameEventType);

	UFUNCTION(BlueprintCallable)
	void Init(AActor* actor, ECharacterMovementTypes characterMovementTypeNew, bool usePathfindingNew);

public:
	UAICharacterBehaviourInteractWithActorData();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterBehaviourInteractWithActorData) { return 0; }
