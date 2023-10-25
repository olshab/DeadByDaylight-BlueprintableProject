#pragma once

#include "CoreMinimal.h"
#include "PerkUtilitiesInterface.h"
#include "Perk.h"
#include "RedHerring.generated.h"

class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class URedHerring : public UPerk, public IPerkUtilitiesInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AGenerator* _generatorBeingRepaired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_MarkedGenerator, Transient)
	AGenerator* _markedGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _secondsToActivatePerk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _loudNoiseTriggeredNotifyTime;

	UPROPERTY(EditAnywhere)
	float _cooldownLevels;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_MarkedGenerator(AGenerator* oldMarkedGenerator);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLoudNoiseTriggered();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	URedHerring();
};

FORCEINLINE uint32 GetTypeHash(const URedHerring) { return 0; }
