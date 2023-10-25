#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "GameplayTagContainer.h"
#include "EMultiLingeringStateTagStrategy.h"
#include "LingeringMultiStateTagStatusEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API ULingeringMultiStateTagStatusEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _ownerStateTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMultiLingeringStateTagStrategy _strategy;

public:
	ULingeringMultiStateTagStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const ULingeringMultiStateTagStatusEffect) { return 0; }
