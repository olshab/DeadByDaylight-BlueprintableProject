#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "UObject/NoExportTypes.h"
#include "DoctorSurvivorCosmeticHelperActor.generated.h"

class APallet;
class USurvivorMadnessEffect;
class AIllusionaryDoctor;

UCLASS(Blueprintable)
class ADoctorSurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	bool IsSurvivorOperatingLocker() const;

	UFUNCTION(BlueprintPure)
	USurvivorMadnessEffect* GetSurvivorMadnessEffect() const;

	UFUNCTION(BlueprintPure)
	AIllusionaryDoctor* GetIllusionaryDoctor() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOwningSurvivorShocked();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnMadnessIntermittentScream();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnMadnessChanged(int32 newTier, bool increased);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInsaneSkillCheck();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIllusionaryPalletDeactivated(const APallet* pallet);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIllusionaryPalletActivated(const APallet* pallet);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIllusionaryDoctorApparitionSequenceStart(const FTransform& illusionaryDoctorTransform, const float apparitionDuration);

	UFUNCTION(BlueprintPure)
	bool CanPlayShockedAnimation() const;

	UFUNCTION(BlueprintPure)
	bool CanPlayOverwhelmingMadnessAudio() const;

	UFUNCTION(BlueprintPure)
	bool CanPlayOverwhelmingMadnessAnimation() const;

	UFUNCTION(BlueprintPure)
	bool CanPlayerSeeIllusionaryPalletGlitch(APallet* pallet) const;

public:
	ADoctorSurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const ADoctorSurvivorCosmeticHelperActor) { return 0; }
