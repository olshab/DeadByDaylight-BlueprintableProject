#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K24CheatComponent.generated.h"

class AZombiesManagement;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK24CheatComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AZombiesManagement> _zombieManagementClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AZombiesManagement* _zombiesManagement;

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_TeleportZombiesTo(float x, float y, float z);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K24ZombieFall(const float Zvalue);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K24StopAllZombies();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K24StartAllZombies();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K24SpawnZombieOnKiller();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K24SetPowerLevelPoints(const float value);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K24SetContaminationOnSurvivor(const bool value);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K24ComeToMeMyZombies();

public:
	UK24CheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK24CheatComponent) { return 0; }
