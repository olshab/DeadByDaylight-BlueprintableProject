#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "RiflePlayerLinker.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API URiflePlayerLinker : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLinkedPlayerSet, ADBDPlayer*, linkedPlayer);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLinkedPlayerSet OnLinkedPlayerSet;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _linkedPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _linkedPlayerDuringAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _linkOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	float _desiredLinkLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _elasticLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _minimumLinkLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _breakFreeCloseRangeMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _movementLinkReductionThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _movementAccelerationTreshold;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_OnClientConfirmTensionBreakChain(ADBDPlayer* player);

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_Unlink();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_Link(ADBDPlayer* linkedPlayer);

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetLinkOwner() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetLinkedPlayer() const;

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_OnAuthorityTensionBreakChain(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	URiflePlayerLinker();
};

FORCEINLINE uint32 GetTypeHash(const URiflePlayerLinker) { return 0; }
