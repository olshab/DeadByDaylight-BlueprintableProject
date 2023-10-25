#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "BlightedSerumCollisionInteraction.generated.h"

class UBlightedSerumCooldownInteraction;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2020_API UBlightedSerumCollisionInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBlightedSerumCooldownInteraction* _cooldownInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _bounceTime;

public:
	UFUNCTION(BlueprintCallable)
	void SetCooldownInteraction(UBlightedSerumCooldownInteraction* cooldownInteraction);

public:
	UBlightedSerumCollisionInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UBlightedSerumCollisionInteraction) { return 0; }
