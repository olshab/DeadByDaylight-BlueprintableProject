#pragma once

#include "CoreMinimal.h"
#include "EK29SurvivorInteractionBlockReason.h"
#include "K29SurvivorStatus.generated.h"

class UChargeableInteractionDefinition;
class UK29SurvivorThrowableComponent;
class UChargeableComponent;
class ACamperPlayer;
class UK29SurvivorCarriableComponent;

USTRUCT(BlueprintType)
struct FK29SurvivorStatus
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsGrabbedByPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float LastTimeGrabbedByPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ACamperPlayer* OwningSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 InfectionLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 TimesCuredByHeal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsInfected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsInfectionActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UChargeableInteractionDefinition* UseInfectionRemoverInteractionSelf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UChargeableInteractionDefinition* UseInfectionRemoverInteractionOther;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UChargeableComponent* UseInfectionRemoverChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NotReplicated, Transient)
	bool AreInfectionRemoverInteractionsInitialized;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UK29SurvivorCarriableComponent* CarriableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UK29SurvivorThrowableComponent* ThrowableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NotReplicated, Transient)
	TArray<EK29SurvivorInteractionBlockReason> InteractionBlockReasons;

public:
	THEK29_API FK29SurvivorStatus();
};

FORCEINLINE uint32 GetTypeHash(const FK29SurvivorStatus) { return 0; }
