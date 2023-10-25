#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalletTracker.generated.h"

class ASlasherPlayer;
class USceneComponent;
class APallet;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API APalletTracker : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient)
	APallet* _procedurallySpawnedPallet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DreamPallet, Transient)
	APallet* _dreamPallet;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _indicatorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _blocked;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RevealToLocalPlayerBP(bool shown);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_DreamPallet(APallet* oldDreamPallet);

	UFUNCTION(BlueprintCallable)
	void InitializeTunableValues(ASlasherPlayer* slasher);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void EnableSelectedEffectToLocalPlayer(bool activated);

	UFUNCTION(BlueprintPure)
	bool CanSpawnDreamPalletAtLocation() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	APalletTracker();
};

FORCEINLINE uint32 GetTypeHash(const APalletTracker) { return 0; }
