#pragma once

#include "CoreMinimal.h"
#include "TunableStat.h"
#include "ObjectStateProvider.h"
#include "BaseHusk.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "K35Decoy.generated.h"

class UPrimitivesRegistererComponent;
class UCapsuleComponent;
class UStaticMeshComponent;
class UGameplayTagContainerComponent;
class UClippableProviderComponent;
class USphereComponent;
class ADBDPlayer;
class ASlasherPlayer;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class AK35Decoy : public ABaseHusk, public IObjectStateProvider
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _killerOverlapIgnoreOnSpawnDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* _playerOverlapComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitivesRegistererComponent* _primitivesRegistererComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UClippableProviderComponent* _clippableProviderComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USphereComponent* _headSphereComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _bodySocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _headSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCapsuleComponent* _bodyCapsuleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _selfDestroyTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isTerrorRadiusAndRedStainActive;

private:
	UPROPERTY(EditAnywhere, Transient)
	TSet<TWeakObjectPtr<ADBDPlayer>> _overlappingPlayers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UGameplayTagContainerComponent* _objectState;

protected:
	UFUNCTION(BlueprintCallable)
	void SetHuskVisibilityChecked(const bool isVisible);

private:
	UFUNCTION(BlueprintCallable)
	void OnPlayerOverlapEnd(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex);

	UFUNCTION()
	void OnPlayerOverlapBegin(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable)
	void OnKillerCustomizationMeshChanged();

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_Spawn(const FVector spawnLocation);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SelfDestruct();

protected:
	UFUNCTION(BlueprintPure)
	bool IsLocalPlayerOverlapping() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnVisibilityChanged(const bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIntroCompleted();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAnyPlayerStartsOverlap();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAmountOfOverlappingPlayersChangedDuringOverlap();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnAllPlayersStopOverlap();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSelfDestructTimerComplete();

public:
	AK35Decoy();
};

FORCEINLINE uint32 GetTypeHash(const AK35Decoy) { return 0; }
