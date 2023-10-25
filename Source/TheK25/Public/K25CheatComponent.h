#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K25CheatComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK25CheatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K25TriggerUncontrolledChainsOnLocalSurvivor(const int32 numbChains);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K25TriggerUncontrolledChainsOnClosestsSurvivorToPosition(float x, float y, float z, const int32 numbChains);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K25TriggerUncontrolledChainsOnAllSurvivors(const int32 numbChains);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K25ShowAllLamentConfigurationSpawnPoints(float timeDisplayed);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K25SetPowerNoCooldown(bool noCooldown);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K25RevealLamentConfigurationLocation(float timeDisplayed);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K25ForceRespawnLamentConfiguration();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K25ForceRemoveAllChainsOnLocalSurvivor();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K25ForceRemoveAllChainsOnClosestsSurvivorToPosition(float x, float y, float z);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K25ForceRemoveAllChainsOnAllSurvivors();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K25ComeToPositionLamentConfiguration(float x, float y, float z);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K25ComeToMeLamentConfiguration();

public:
	UK25CheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25CheatComponent) { return 0; }
