#pragma once

#include "CoreMinimal.h"
#include "PlayerStatusEffectSpawnerHelper.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectSpawnData.h"
#include "DeadHard.generated.h"

class UAnimInstance;
class UInteractionAttacherComponent;
class UDeadHardInteraction;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDeadHard : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UAnimInstance> _deadHardAnimInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UDeadHardInteraction> _deadHardInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _deadHardCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FStatusEffectSpawnData> _effectsToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FPlayerStatusEffectSpawnerHelper _spawnerHelper;

	UPROPERTY(EditAnywhere)
	float _exhaustedCooldownPerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionAttacherComponent* _interactionAttacherComponent;

private:
	UFUNCTION(BlueprintPure)
	float GetExhaustedDuration() const;

public:
	UFUNCTION(BlueprintPure)
	float GetDeadHardCooldownDuration() const;

public:
	UDeadHard();
};

FORCEINLINE uint32 GetTypeHash(const UDeadHard) { return 0; }
