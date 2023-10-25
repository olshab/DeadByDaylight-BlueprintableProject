#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NightmareCheatComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENIGHTMARE_API UNightmareCheatComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AllowWakeUpAnyClock, meta=(AllowPrivateAccess=true))
	bool _allowWakeUpAnyClock;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_AllowWakeUpAnyClock();

public:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_AllowWakeUpAtAnyClock(bool allow);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UNightmareCheatComponent();
};

FORCEINLINE uint32 GetTypeHash(const UNightmareCheatComponent) { return 0; }
