#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "EBloodOrbState.h"
#include "BloodOrb.generated.h"

class ADBDPlayer;
class USceneComponent;
class UDBDOutlineComponent;
class UBloodOrbFadeComponent;

UCLASS(Blueprintable)
class THEONI_API ABloodOrb : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FFloatInterval _randomMoveDelayInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USceneComponent* _absorbReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _despawnDelay;

private:
	UPROPERTY(EditAnywhere, Replicated, Transient)
	TWeakObjectPtr<ADBDPlayer> _droppingPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
	EBloodOrbState _state;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBloodOrbFadeComponent* _fadeComponent;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void UpdateAttracted_Cosmetic(const FVector destination, ADBDPlayer* absorber, const float deltaTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void UpdateAbsorbed_Cosmetic(const FVector destination, ADBDPlayer* absorber, const float deltaTime);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_State(const EBloodOrbState oldState);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnIsAttractedChangedCosmetic(const bool isAttracted);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnDestroyedCosmetic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnAbsorbedCosmetic();

public:
	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetDroppingPlayer() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintAuthorityOnly)
	void Authority_OnDropped(const ADBDPlayer* droppedBy, const float impulseFactor);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnDropFinished();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_DestroyBloodOrb();

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Despawn();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ABloodOrb();
};

FORCEINLINE uint32 GetTypeHash(const ABloodOrb) { return 0; }
