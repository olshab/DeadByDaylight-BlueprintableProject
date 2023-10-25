#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GeneratorQueryHandlePair.h"
#include "DiscordancePerk.generated.h"

class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDiscordancePerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FGeneratorQueryHandlePair> _generatorQueryHandlePairs;

	UPROPERTY(EditAnywhere)
	float _effectRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _auraLingerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _numSurvivorsRepairingToReveal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isPerkConsideredActive;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_AddLingeringGeneratorAura(AGenerator* generator);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_AddGeneratorAura(AGenerator* generator);

	UFUNCTION(BlueprintPure)
	float GetEffectRangeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetAuraLingerDuration() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDiscordancePerk();
};

FORCEINLINE uint32 GetTypeHash(const UDiscordancePerk) { return 0; }
