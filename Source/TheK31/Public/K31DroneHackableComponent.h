#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K31DroneHackableComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31DroneHackableComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _unhackableClearanceCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsHackable, meta=(AllowPrivateAccess=true))
	bool _isHackable;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsHackable();

public:
	UFUNCTION(BlueprintPure)
	bool IsHackable() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31DroneHackableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31DroneHackableComponent) { return 0; }
