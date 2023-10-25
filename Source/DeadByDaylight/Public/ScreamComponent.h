#pragma once

#include "CoreMinimal.h"
#include "MontagePlaybackDefinition.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "ECamperDamageState.h"
#include "ScreamComponent.generated.h"

class UPerkManager;
class UMontagePlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UScreamComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UPerkManager* _perkManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UMontagePlayer* _montagePlayer;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _tagsPreventingScream;

public:
	UFUNCTION(BlueprintCallable)
	bool TriggerScreamEventsIfPossible(bool fireLoudNoiseEvent, float audibleRange);

	UFUNCTION(BlueprintCallable)
	bool TriggerScreamEventsAndAndAnimationIfPossible(bool fireLoudNoiseEvent, FMontagePlaybackDefinition montageDefinition, float audibleRange);

private:
	UFUNCTION(BlueprintCallable)
	void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

public:
	UFUNCTION(BlueprintPure)
	bool CanScream() const;

public:
	UScreamComponent();
};

FORCEINLINE uint32 GetTypeHash(const UScreamComponent) { return 0; }
