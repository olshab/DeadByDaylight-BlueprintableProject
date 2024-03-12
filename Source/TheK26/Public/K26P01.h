#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "K26P01.generated.h"

class AActor;
class UStatusEffect;
class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK26P01 : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _generatorBlockDuration;

	UPROPERTY(EditAnywhere)
	float _hookedRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _auraRevealDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _finalGeneratorBlockDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _generatorAuraColorForKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _survivorsToBeHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _timedRevealToKillerClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BlockedGenerators, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _blockedGenerators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _hookedSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _timedRevealToKillerEffect;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_BlockedGenerators();

	UFUNCTION(BlueprintCallable)
	void Authority_OnInRangeChanged(const bool inRange);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK26P01();
};

FORCEINLINE uint32 GetTypeHash(const UK26P01) { return 0; }
