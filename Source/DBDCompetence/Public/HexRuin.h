#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "FastTimer.h"
#include "Templates/SubclassOf.h"
#include "HexRuin.generated.h"

class UStatusEffect;
class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHexRuin : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<AGenerator*, FFastTimer> _curseActivationTimers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _authority_blockedGeneratorsToStartRegression;

	UPROPERTY(EditAnywhere)
	float _regressionModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _ruinStatusEffectClass;

	UPROPERTY(EditAnywhere, Transient)
	TMap<AGenerator*, uint64> _gameplayModifierHandles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _ruinStatusEffect;

private:
	UFUNCTION(BlueprintPure)
	float GetRegressionModifierByLevel(int32 perkLevel) const;

	UFUNCTION(BlueprintCallable)
	void Authority_SetupCurseOnAllGenerators();

public:
	UHexRuin();
};

FORCEINLINE uint32 GetTypeHash(const UHexRuin) { return 0; }
