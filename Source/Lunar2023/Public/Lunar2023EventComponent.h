#pragma once

#include "CoreMinimal.h"
#include "Lunar2022EventComponent.h"
#include "DBDTunableRowHandle.h"
#include "Lunar2023EventComponent.generated.h"

class UTimedInteractionRespawnableTrigger;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ULunar2023EventComponent : public ULunar2022EventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _paperLanternSwitchTimerMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _paperLanternSwitchTimerMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimedInteractionRespawnableTrigger* _timedInteractionRespawnableTrigger;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

public:
	ULunar2023EventComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULunar2023EventComponent) { return 0; }
