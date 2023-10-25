#pragma once

#include "CoreMinimal.h"
#include "CamperDamageResult.generated.h"

class AActor;
class UGameplayModifierContainer;
class ACharacter;

USTRUCT(BlueprintType)
struct FCamperDamageResult
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* DamageSource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACharacter* DamagePlayerOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UGameplayModifierContainer* KOPreventedSource;

public:
	DEADBYDAYLIGHT_API FCamperDamageResult();
};

FORCEINLINE uint32 GetTypeHash(const FCamperDamageResult) { return 0; }
