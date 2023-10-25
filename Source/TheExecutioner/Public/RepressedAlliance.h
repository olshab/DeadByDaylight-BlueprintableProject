#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SecondaryInteractionProperties.h"
#include "RepressedAlliance.generated.h"

class AGenerator;
class UInteractionDefinition;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class URepressedAlliance : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _repairTimesNeededToActivate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _generatorBlockDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSecondaryInteractionProperties _secondaryActionProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CurrentRepairInteractionWithAbility, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _currentRepairInteractionWithAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BlockedGenerator, Transient, meta=(AllowPrivateAccess=true))
	AGenerator* _blockedGenerator;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_OnActionInputPressed(AGenerator* generator);

	UFUNCTION(BlueprintCallable)
	void OnRep_CurrentRepairInteractionWithAbility(UInteractionDefinition* oldRepairInteraction);

	UFUNCTION(BlueprintCallable)
	void OnRep_BlockedGenerator(AGenerator* oldGenerator);

	UFUNCTION(BlueprintPure)
	float GetRepairTimesNeededToActivateAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetGeneratorBlockDuration() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	URepressedAlliance();
};

FORCEINLINE uint32 GetTypeHash(const URepressedAlliance) { return 0; }
