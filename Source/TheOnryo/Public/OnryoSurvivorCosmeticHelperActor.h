#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "ECamperDamageState.h"
#include "OnryoSurvivorCosmeticHelperActor.generated.h"

class UCondemnedComponent;
class UGameplayTagContainerComponent;
class ACamperPlayer;
class ABaseSky;

UCLASS(Blueprintable)
class THEONRYO_API AOnryoSurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCondemnedComponent* _condemnedComponent;

protected:
	UFUNCTION(BlueprintPure)
	UGameplayTagContainerComponent* GetObjectState() const;

	UFUNCTION(BlueprintPure)
	UCondemnedComponent* GetCondemnedComponent() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnReceiveTape(ACamperPlayer* camper);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLoseTape(ACamperPlayer* camper);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLoseCondemnStack(ACamperPlayer* camper, float currentStacks);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLightingSet(ABaseSky* lighting);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnHookedChanged();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGainCondemnStack(ACamperPlayer* camper, float currentStacks);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCarryStart(ACamperPlayer* camper);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCarryEnd(ACamperPlayer* camper);

public:
	AOnryoSurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AOnryoSurvivorCosmeticHelperActor) { return 0; }
