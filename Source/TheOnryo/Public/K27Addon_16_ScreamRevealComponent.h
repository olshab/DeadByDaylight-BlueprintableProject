#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K27Addon_16_ScreamRevealComponent.generated.h"

class ACamperPlayer;
class ADBDPlayer;
class UActivatableStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK27Addon_16_ScreamRevealComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _authorityHasRequestedSurvivorScreamConfirmation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _screamDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UActivatableStatusEffect> _revealAuraToKillerEffectClass;

	UPROPERTY(EditAnywhere, Transient, Export)
	TMap<TWeakObjectPtr<ACamperPlayer>, UActivatableStatusEffect*> _revealAuraToKillerPerSurvivor;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_ConfirmKillerIsInViewValidation(bool isKillerInView);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RevealAndMakeSurvivorScream(const float screamRevealDuration);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_QueryIsKillerInSurvivorView();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_RevealAndMakeSurvivorScream(ADBDPlayer* survivorPlayer, const float screamRevealDuration);

public:
	UK27Addon_16_ScreamRevealComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK27Addon_16_ScreamRevealComponent) { return 0; }
