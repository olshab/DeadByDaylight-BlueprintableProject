#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K28CheatComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK28CheatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K28UnlockAllLockbars();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K28TriggerNextNightCycle();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K28SetPowerNoCooldown(bool noCooldown);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K28LockAllLockbars();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K28DisplayLockerClusters(float secondsToDisplayDebugElements);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K28DebugCosmetics(bool noCooldown);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K28BreakAllLocks();

public:
	UK28CheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28CheatComponent) { return 0; }
