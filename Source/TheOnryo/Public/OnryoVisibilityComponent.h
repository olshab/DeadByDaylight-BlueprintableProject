#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "FlickerSettings.h"
#include "EFlickerType.h"
#include "OnryoVisibilityComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOnryoVisibilityComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isKillerVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInKillerSightRange;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _killerRevealingStateTags;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _killerVisibleMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<EFlickerType, FFlickerSettings> _flickerSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isInIntroPhase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isManifested;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isInManifestingTransition;

private:
	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged();

	UFUNCTION(BlueprintCallable)
	void OnKillerInSurvivorSightRangeChanged(const bool inRange);

public:
	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnManifestationStateChanged(const bool isManifested, const bool isImmediateManifest);

public:
	UOnryoVisibilityComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoVisibilityComponent) { return 0; }
