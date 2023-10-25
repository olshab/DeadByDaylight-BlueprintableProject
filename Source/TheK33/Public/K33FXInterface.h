#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "K33FXInterface.generated.h"

class AK33Turret;
class ACamperPlayer;

UINTERFACE(Blueprintable)
class THEK33_API UK33FXInterface : public UInterface
{
	GENERATED_BODY()
};

class THEK33_API IK33FXInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateTailAttackVFX(const FVector& location, const FRotator& rotation);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerTunnelTransitionFadeOut(float timeBeforeFadeOut);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerTunnelTransitionFadeIn(float timeBeforeFadeIn);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TailAttackObstructedVFX(const FVector& obstructionLocation);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StopTailAttackVFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetVisibility(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetKillerInvisibleUnderCurrentFloor(bool shouldKillerBeInvisibleUnderFloor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Cosmetic_SetKillerFPVAudioAmbiance(bool isTunnelAmbianceActive);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretMaxDamageReceived();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretHitByTailAttack(AK33Turret* turret);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretDamageChanged(float damagePercent);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorHitByTailAttack(ACamperPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSpecialModeChanged(bool isInSpecialMode);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerShotByTurret();

};
