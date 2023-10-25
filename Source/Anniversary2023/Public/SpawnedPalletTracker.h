#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnedPalletTracker.generated.h"

class APallet;
class USceneComponent;

UCLASS(Blueprintable, Abstract)
class ASpawnedPalletTracker : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _indicatorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TrackedPallet, Transient, meta=(AllowPrivateAccess=true))
	APallet* _trackedPallet;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIndicatorOutlineVisibility(bool activated);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TrackedPallet();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASpawnedPalletTracker();
};

FORCEINLINE uint32 GetTypeHash(const ASpawnedPalletTracker) { return 0; }
