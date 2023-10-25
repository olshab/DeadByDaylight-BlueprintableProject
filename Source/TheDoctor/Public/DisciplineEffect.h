#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DisciplineEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDisciplineEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _deactivationDelay;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _redStainInterpolating;

protected:
	UFUNCTION(BlueprintCallable)
	void SetRedStainInterpolating(bool isInterpolating);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateSurvivorRedStain(bool visible, float deltaTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateKillerRedStain(bool visible, float deltaTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SpawnRedStains();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivateSurvivorRedStain(bool activate);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivateKillerRedStain(bool activate);

public:
	UDisciplineEffect();
};

FORCEINLINE uint32 GetTypeHash(const UDisciplineEffect) { return 0; }
