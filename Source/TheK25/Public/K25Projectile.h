#pragma once

#include "CoreMinimal.h"
#include "KillerProjectile.h"
#include "LaunchInfo.h"
#include "EK25ProjectileDeactivateReason.h"
#include "Engine/EngineTypes.h"
#include "K25ProjectileDeactivationData.h"
#include "UObject/NoExportTypes.h"
#include "K25Projectile.generated.h"

class UKillerProjectileDodgeComponent;
class UStaticMeshComponent;
class UPrimitiveComponent;
class AK25Chain;
class UDBDProjectileMovementComponent;

UCLASS(Blueprintable, Abstract)
class AK25Projectile : public AKillerProjectile
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* _staticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitiveComponent* _characterCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitiveComponent* _environmentCollider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UKillerProjectileDodgeComponent* _projectileDodgeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FLaunchInfo _launchInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient)
	AK25Chain* _attachedChain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _timeIgnoreSlasherCollision;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FK25ProjectileDeactivationData _lastDeactivationData;

public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_RequestDisableProjectile(EK25ProjectileDeactivateReason deactivateReason);

protected:
	UFUNCTION()
	void OnProjectileStopped(const FHitResult& result);

public:
	UFUNCTION(BlueprintPure)
	UDBDProjectileMovementComponent* GetMovementComponent() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FVector GetChainAttachmentLocation() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnProjectileDeactivated(const FK25ProjectileDeactivationData& deactivationData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnProjectileActivated();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK25Projectile();
};

FORCEINLINE uint32 GetTypeHash(const AK25Projectile) { return 0; }
