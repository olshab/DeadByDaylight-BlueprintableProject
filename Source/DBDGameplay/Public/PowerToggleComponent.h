#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PowerToggleComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPowerToggleComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsInPower, Transient, meta=(AllowPrivateAccess=true))
	bool _isInPower;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsInPower() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPowerToggleComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPowerToggleComponent) { return 0; }
