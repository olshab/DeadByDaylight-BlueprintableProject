#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "DeadMansSwitch.generated.h"

class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDeadMansSwitch : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _activationDurationByLevels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _anySurvivorLetGo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BlockedGenerators, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _blockedGenerators;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_BlockedGenerators();

public:
	UFUNCTION(BlueprintPure)
	float GetActivationDurationAtLevel() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDeadMansSwitch();
};

FORCEINLINE uint32 GetTypeHash(const UDeadMansSwitch) { return 0; }
