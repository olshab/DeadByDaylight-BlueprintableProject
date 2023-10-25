#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "PlaceDreamPalletInteraction.generated.h"

class APalletTracker;
class ASlasherPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPlaceDreamPalletInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient)
	TArray<APalletTracker*> _palletTrackers;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	APalletTracker* _closestTracker;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SpawnDreamPallet(APalletTracker* trackerAtLocation);

private:
	UFUNCTION(BlueprintCallable)
	void InitializeTunableValues(ASlasherPlayer* killer);

public:
	UFUNCTION(BlueprintPure)
	APalletTracker* GetTargetedPallet() const;

	UFUNCTION(BlueprintPure)
	bool CanSpawnDreamPalletAtTracker(APalletTracker* tracker) const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPlaceDreamPalletInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UPlaceDreamPalletInteraction) { return 0; }
