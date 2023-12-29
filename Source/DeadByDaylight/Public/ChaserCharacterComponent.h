#pragma once

#include "CoreMinimal.h"
#include "ChaseUpdateInfo.h"
#include "ChaseComponent.h"
#include "GameplayTagContainer.h"
#include "ChaserCharacterComponent.generated.h"

class APawn;
class UDBDPawnSensingComponent;
class ACamperPlayer;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChaserCharacterComponent : public UChaseComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDBDPawnSensingComponent* _camperSensor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ADBDPlayer*, FChaseUpdateInfo> _chaseUpdateInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _chasedPlayers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _authority_survivorsWhoStunnedKillerByPalletDuringChase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _preventChaseTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _camperSensorUsesActorRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _camperSensorLocationUsesEyesViewPoint;

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerLocallyObservedChanged(bool locallyObserved);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnChaseStart(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnChaseEnd(ACamperPlayer* survivor, const FChaseUpdateInfo chaseUpdateInfo);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnAllChaseEnd();

	UFUNCTION(BlueprintCallable)
	void Authority_OnChaseTargetFound(APawn* pawn);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UChaserCharacterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UChaserCharacterComponent) { return 0; }
