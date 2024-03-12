#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Eruption.generated.h"

class AGenerator;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UEruption : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _server_affectedGenerators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isPerkEnabled;

	UPROPERTY(EditAnywhere)
	float _generatorRegressPercentage;

	UPROPERTY(EditAnywhere)
	float _survivorImposedStatusEffectDuration;

	UPROPERTY(EditAnywhere)
	float _perkCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _screamRevealLocationDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _survivorEffectClass;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RemoveHighlights(const TArray<AGenerator*>& highlightedGenerators);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_HighlightGenerator(AGenerator* generator);

public:
	UFUNCTION(BlueprintPure)
	float GetSurvivorImposedStatusEffectDurationAtLevel() const;

protected:
	UFUNCTION(BlueprintPure)
	float GetScreamRevealLocationDuration() const;

public:
	UFUNCTION(BlueprintPure)
	float GetGeneratorRegressPercentageAtLevel() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGeneratorHighlightStart(AGenerator* highlightedGenerator);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGeneratorHighlightEnd(AGenerator* highlightedGenerator);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UEruption();
};

FORCEINLINE uint32 GetTypeHash(const UEruption) { return 0; }
