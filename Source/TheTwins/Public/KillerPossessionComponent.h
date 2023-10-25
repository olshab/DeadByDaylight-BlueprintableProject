#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "PossessionComponent.h"
#include "KillerPossessionComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UKillerPossessionComponent : public UPossessionComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ShouldDeactivateCollisionsWithSurvivors, meta=(AllowPrivateAccess=true))
	bool _shouldDeactivateCollisionsWithSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeBeforeCollisionsDeactivation;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ShouldDeactivateCollisionsWithSurvivors();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UKillerPossessionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerPossessionComponent) { return 0; }
