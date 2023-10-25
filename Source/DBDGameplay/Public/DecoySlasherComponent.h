#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StunnableInterface.h"
#include "OnStunned.h"
#include "TriggerDecoyVisibilityVFX.h"
#include "UObject/NoExportTypes.h"
#include "DecoySlasherComponent.generated.h"

class UTerrorRadiusEmitterComponent;
class ASlasherPlayer;
class URedStainComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UDecoySlasherComponent : public UActorComponent, public IStunnableInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnStunned OnStunned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FTriggerDecoyVisibilityVFX TriggerDecoyVisibilityVFX;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasTerrorRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasRedGlow;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _initialized;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTerrorRadiusEmitterComponent* _terrorRadiusEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	URedStainComponent* _redStainComponent;

public:
	UFUNCTION(BlueprintCallable)
	void SetDecoyIsActive(bool isActive, const FVector& location, const FRotator& rotation, bool visibleRedGlow);

private:
	UFUNCTION(BlueprintCallable)
	void OnRealSlasherTerrorRadiusChanged(float newValue);

public:
	UFUNCTION(BlueprintPure)
	bool IsDecoyActive() const;

	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetRealSlasher() const;

	UFUNCTION(BlueprintCallable)
	void DoPostVFXUpdates(const FVector& location, const FRotator& rotation);

private:
	UFUNCTION(BlueprintCallable)
	void CopyCustomizationFromSlasher();

public:
	UDecoySlasherComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDecoySlasherComponent) { return 0; }
