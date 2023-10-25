#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "DBDPlayerTotemPair.h"
#include "K25P02.generated.h"

class ATotem;
class ADBDPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK25P02 : public UHexPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _totemAuraRevealRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _totemBlockerHasLifetime;

	UPROPERTY(EditAnywhere)
	float _totemBlockerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _obliviousStatusEffectClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CursedSurvivors, Transient, meta=(AllowPrivateAccess=true))
	TArray<FDBDPlayerTotemPair> _cursedSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _hookedSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ATotem*> _previouslyBoundTotems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FDBDPlayerTotemPair _lastPlayerTotemPair;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _obliviousStatusEffects;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_CursedSurvivors();

public:
	UFUNCTION(BlueprintPure)
	bool GetTotemBlockerHasLifetime() const;

	UFUNCTION(BlueprintPure)
	float GetTotemBlockerDuration() const;

	UFUNCTION(BlueprintPure)
	float GetTotemAuraRevealRadius() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK25P02();
};

FORCEINLINE uint32 GetTypeHash(const UK25P02) { return 0; }
