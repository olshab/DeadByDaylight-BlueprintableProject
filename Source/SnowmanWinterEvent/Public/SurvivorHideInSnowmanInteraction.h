#pragma once

#include "CoreMinimal.h"
#include "HideInSnowmanInteraction.h"
#include "ECamperDamageState.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "SurvivorHideInSnowmanInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class USurvivorHideInSnowmanInteraction : public UHideInSnowmanInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _shouldRunOutOfSnowman;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _isSnowmanShieldDamaged;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _nonDamagingSnowmanDestroyingEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minimumTimeToRunAndExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _cameraZoomBack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeToZoomEnter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeToZoomExit;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorHideInSnowmanInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorHideInSnowmanInteraction) { return 0; }
