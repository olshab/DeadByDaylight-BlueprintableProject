#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "HarpoonChainPositioner.generated.h"

class AHarpoonProp;
class ADBDPlayer;
class ARifleChain;
class AActor;
class AHarpoonProjectile;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UHarpoonChainPositioner : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AHarpoonProp> _harpoonPropClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _survivorAttachSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _animationSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _reelBackToRifleSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _harpoonMinimumSnapBackDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _harpoonMaximumSnapBackDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AHarpoonProp* _harpoonProp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AHarpoonProjectile* _harpoonProjectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _collector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ARifleChain* _chain;

private:
	UFUNCTION(BlueprintCallable)
	void OnOwnerCollected(ADBDPlayer* collector);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnHarpoonTravelingChanged(bool isTravelling);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnHarpoonLoadedOnRifle();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnCurrentHarpoonChanged(AActor* currentHarpoon);

public:
	UFUNCTION(BlueprintCallable)
	void AttachToRifle();

	UFUNCTION(BlueprintCallable)
	void AttachToAnimSocket();

public:
	UHarpoonChainPositioner();
};

FORCEINLINE uint32 GetTypeHash(const UHarpoonChainPositioner) { return 0; }
