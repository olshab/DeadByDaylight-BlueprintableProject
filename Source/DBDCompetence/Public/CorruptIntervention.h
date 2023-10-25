#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "CorruptIntervention.generated.h"

class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UCorruptIntervention : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, EditFixedSize)
	uint8 _blockedGeneratorCount;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _generatorBlockDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _generatorAuraColorForKiller;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BlockedGenerators, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _blockedGenerators;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_BlockedGenerators();

	UFUNCTION(BlueprintCallable)
	void LevelReadyToBlockedGenerators();

	UFUNCTION(BlueprintPure)
	float GetGeneratorBlockDuration() const;

	UFUNCTION(BlueprintCallable)
	void Authority_TryActivatePerk();

	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCorruptIntervention();
};

FORCEINLINE uint32 GetTypeHash(const UCorruptIntervention) { return 0; }
