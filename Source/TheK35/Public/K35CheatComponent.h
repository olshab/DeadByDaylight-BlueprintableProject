#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K35CheatComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK35CheatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K35ToggleAreaBlastDebugSphere() const;

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K35RecycleOldestKillerTeleportPoint() const;

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K35PrintIsAbleToSpawnHuskOnCurrentLocation() const;

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K35CompleteKillerTeleportPointSpawnChargeTime() const;

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_K35CompleteAllCooldowns() const;

public:
	UK35CheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK35CheatComponent) { return 0; }
