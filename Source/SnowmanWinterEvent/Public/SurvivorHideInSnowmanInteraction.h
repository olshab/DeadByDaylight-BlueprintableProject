#pragma once

#include "CoreMinimal.h"
#include "HideInSnowmanInteraction.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "ECamperDamageState.h"
#include "SurvivorHideInSnowmanInteraction.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class USurvivorHideInSnowmanInteraction : public UHideInSnowmanInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _shouldRunOutOfSnowman;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minimumTimeToRunAndExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _cameraZoomBack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeToZoomEnter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeToZoomExit;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _nonDamagingKillerSnowmanDestroyingEvents;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _gameEventsToCauseScream;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FString> _overridingKillerInteractionIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _shouldScreamOnExit;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorScreamFromExit(ADBDPlayer* playerExiting);

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorHideInSnowmanInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorHideInSnowmanInteraction) { return 0; }
