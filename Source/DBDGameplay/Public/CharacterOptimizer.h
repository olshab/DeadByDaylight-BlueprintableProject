#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterOptimizer.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCharacterOptimizer : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _characterMovementTickRateWhenInsignificant;

public:
	UCharacterOptimizer();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterOptimizer) { return 0; }
