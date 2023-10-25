#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "ThrillingTremors.generated.h"

class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UThrillingTremors : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	int32 _cooldownByLevel;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _durationByLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _disableWhenSurvivorPutDownOrUnhooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _generatorAuraColorForKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BlockedGenerators, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _blockedGenerators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _revealedGenerators;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_BlockedGenerators();

public:
	UFUNCTION(BlueprintPure)
	float GetDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	int32 GetCooldownAtLevel() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UThrillingTremors();
};

FORCEINLINE uint32 GetTypeHash(const UThrillingTremors) { return 0; }
