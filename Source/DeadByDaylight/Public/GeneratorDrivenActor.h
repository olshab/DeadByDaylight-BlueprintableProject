#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "GeneratorDrivenActor.generated.h"

class AGenerator;
class ADBDPlayer;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AGeneratorDrivenActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LightPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EComponentMobility::Type> TargetMobileLightMobility;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<bool> _activated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _generators;

public:
	UFUNCTION(BlueprintCallable)
	void SetSpawnedObject(AGenerator* generator, int32 generatorId);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInitGeneratorDrivenActor(AGenerator* generator, int32 generatorId);

private:
	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedEvent6(bool isAutoCompleted);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedEvent5(bool isAutoCompleted);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedEvent4(bool isAutoCompleted);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedEvent3(bool isAutoCompleted);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedEvent2(bool isAutoCompleted);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedEvent1(bool isAutoCompleted);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedEvent0(bool isAutoCompleted);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedBySurvivorEvent6(ADBDPlayer* repairingSurvivor);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedBySurvivorEvent5(ADBDPlayer* repairingSurvivor);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedBySurvivorEvent4(ADBDPlayer* repairingSurvivor);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedBySurvivorEvent3(ADBDPlayer* repairingSurvivor);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedBySurvivorEvent2(ADBDPlayer* repairingSurvivor);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedBySurvivorEvent1(ADBDPlayer* repairingSurvivor);

	UFUNCTION(BlueprintCallable)
	void OnGeneratorRepairedBySurvivorEvent0(ADBDPlayer* repairingSurvivor);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnGeneratorRepairedBySurvivor(ADBDPlayer* repairingSurvivor, int32 generatorId);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnActivateGeneratorDrivenActor(bool isAutoCompleted, int32 generatorId);

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_GeneratorRepairedBySurvivor(ADBDPlayer* repairingSurvivor, int32 generatorId);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ActivationChecked(bool activated, bool isAutoCompleted, int32 generatorId);

private:
	UFUNCTION(BlueprintCallable)
	bool IsValidGeneratorId(int32 generatorId) const;

public:
	UFUNCTION(BlueprintPure)
	bool IsActivated(int32 generatorId) const;

	UFUNCTION(BlueprintCallable)
	FRandomStream GetSharedTileRandomizer();

	UFUNCTION(BlueprintCallable)
	void Authority_CheckGeneratorRepairedBySurvivor(ADBDPlayer* repairingSurvivor, int32 generatorId);

	UFUNCTION(BlueprintCallable)
	void Authority_CheckActivation(bool isAutoCompleted, int32 generatorId);

public:
	AGeneratorDrivenActor();
};

FORCEINLINE uint32 GetTypeHash(const AGeneratorDrivenActor) { return 0; }
