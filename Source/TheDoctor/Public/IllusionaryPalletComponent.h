#pragma once

#include "CoreMinimal.h"
#include "PalletPulldownBlockable.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "IllusionaryPalletComponent.generated.h"

class ADBDPlayer;
class UBoxComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEDOCTOR_API UIllusionaryPalletComponent : public UActorComponent, public IPalletPulldownBlockable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTransform _illusionaryPalletDownTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _illusionaryPalletTriggerZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _illusionaryPalletTriggerZoneBoxExtent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _illusionaryPalletTriggerZoneLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _glitchEffectRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _illusionaryPalletStaticMeshComponent;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnStartIllusionaryPalletDeactivation(ADBDPlayer* triggeringPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnStartIllusionaryPalletActivation(const bool isPalletDown);

public:
	UFUNCTION(BlueprintPure)
	float GetGlitchEffectRange() const;

protected:
	UFUNCTION(BlueprintCallable)
	void DeactivateIllusionaryPallet();

public:
	UFUNCTION(BlueprintPure)
	bool CanLocallyObservedPlayerSeeIllusionaryPallet() const;

protected:
	UFUNCTION(BlueprintCallable)
	void ActivateIllusionaryPallet(const bool isPalletDown);

public:
	UIllusionaryPalletComponent();
};

FORCEINLINE uint32 GetTypeHash(const UIllusionaryPalletComponent) { return 0; }
