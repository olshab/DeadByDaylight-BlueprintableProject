#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "GameplayTagContainer.h"
#include "LingeringStateTagStatusEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API ULingeringStateTagStatusEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FGameplayTag _ownerStateTag;

public:
	ULingeringStateTagStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const ULingeringStateTagStatusEffect) { return 0; }
