#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K35P02.generated.h"

class UTerrorRadiusEmitterComponent;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK35P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTerrorRadiusEmitterComponent* _generatorTerrorRadiusEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _undetectableStatusEffect;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _activePerkDuration;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _cooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize, meta=(AllowPrivateAccess=true))
	float _terrorRadiusSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _undetectableStatusEffectClass;

public:
	UK35P02();
};

FORCEINLINE uint32 GetTypeHash(const UK35P02) { return 0; }
