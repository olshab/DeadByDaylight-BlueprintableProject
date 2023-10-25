#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "TwinJumpAttack.generated.h"

class UPhysicalMaterial;
class ADBDPlayer;
class UCurveFloat;
class AConjoinedTwin;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinJumpAttack : public UPounceAttack
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _jumpVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _jumpAngleCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _upDownObstructionAnglePrecision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _leftRightObstructionAnglePrecision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _authorizedLandingHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ShouldTwinHaveJumpObjectType, meta=(AllowPrivateAccess=true))
	bool _shouldTwinHaveJumpObjectType;

public:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_StopJump();

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_OnJumpStartTwin();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ShouldTwinHaveJumpObjectType();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetIsForbiddenLandingLocation(bool isForbiddenLocation);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DestroyTwinOnWrongLanding();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_AttachToSurvivor(ADBDPlayer* survivorToAttachTo);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnJumpStarted(AConjoinedTwin* owningTwin);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnJumpObstructed(AConjoinedTwin* owningTwin, UPhysicalMaterial* physicalMaterial, FVector position, FVector normal);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnJumpLanded(AConjoinedTwin* owningTwin);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnJumpCooldownChanged(bool isInJumpCooldown, AConjoinedTwin* owningTwin);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsForbiddenLandingLocationChanged(bool isForbiddenLocation, AConjoinedTwin* twin);

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_Debug_PrintFinalDecisionOnScreen(bool foundPath);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTwinJumpAttack();
};

FORCEINLINE uint32 GetTypeHash(const UTwinJumpAttack) { return 0; }
