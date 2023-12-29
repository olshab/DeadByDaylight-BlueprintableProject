#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "HideInSnowmanInteraction.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class SNOWMANWINTEREVENT_API UHideInSnowmanInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _timeToEnterSnowman;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _attachToPlayerDelay;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _nonDamagingSnowmanDestroyingEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* _authority_attacker;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _isSnowmanShieldDamaged;

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StopControllingSnowman(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_StartControllingSnowman(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHideInSnowmanInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UHideInSnowmanInteraction) { return 0; }
