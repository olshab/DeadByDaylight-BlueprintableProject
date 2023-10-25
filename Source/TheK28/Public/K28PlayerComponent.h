#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K28PlayerComponent.generated.h"

class ACamperPlayer;
class UK28DayNightComponent;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UK28PlayerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_DayNightComponent, meta=(BindWidget))
	TWeakObjectPtr<UK28DayNightComponent> _dayNightComponent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _nightEffectMinimumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _nightEffectMaximumDistance;

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorInRangeChanged(const bool inRange, ACamperPlayer* player);

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_DayNightComponent();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK28PlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK28PlayerComponent) { return 0; }
