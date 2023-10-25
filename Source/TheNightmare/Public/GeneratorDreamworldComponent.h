#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESkillCheckCustomType.h"
#include "GeneratorDreamworldComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGeneratorDreamworldComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FName> _beamSocketsForBloodEffect;

private:
	UFUNCTION(BlueprintCallable)
	void OnRepairSkillCheckFailed(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float chargeChange);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPlayerFailSkillCheck(ADBDPlayer* player);

public:
	UGeneratorDreamworldComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorDreamworldComponent) { return 0; }
