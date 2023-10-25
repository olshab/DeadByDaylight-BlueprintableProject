#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "GameEventData.h"
#include "ReleaseConjoinedTwin.generated.h"

class AConjoinedTwin;
class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UReleaseConjoinedTwin : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _releaseMaxCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _releaseExitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ReleaseAnimationWentToTheEnd, meta=(AllowPrivateAccess=true))
	bool _releaseAnimationWentToTheEnd;

private:
	UFUNCTION(BlueprintCallable)
	void OnTwinSet(AConjoinedTwin* twin);

	UFUNCTION(BlueprintCallable)
	void OnRep_ReleaseAnimationWentToTheEnd();

	UFUNCTION(BlueprintCallable)
	void OnPowerCollected(ADBDPlayer* collector);

	UFUNCTION()
	void OnKillerStunned(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnReleaseTwinInteractionUpdateStart(ADBDPlayer* sister, AConjoinedTwin* brother);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnReleaseTwinInteractionUpdate(ADBDPlayer* sister, AConjoinedTwin* brother, float deltaTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnReleaseChargeComplete(ADBDPlayer* sister, AConjoinedTwin* brother);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnReleaseCancelled(ADBDPlayer* sister, AConjoinedTwin* brother);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UReleaseConjoinedTwin();
};

FORCEINLINE uint32 GetTypeHash(const UReleaseConjoinedTwin) { return 0; }
