#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "LaunchInfo.h"
#include "UObject/ScriptInterface.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ImpactInfo.h"
#include "BaseProjectileLauncher.generated.h"

class ABaseProjectile;
class APawn;
class IProjectileProvider;
class UBaseProjectileReplicationComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class PROJECTILE_API UBaseProjectileLauncher : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag IsOutOfAmmoTag;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _requireLaunchImpactDetection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasInfiniteAmmunition;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ABaseProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Ammo, meta=(AllowPrivateAccess=true))
	int32 _ammo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_MaxAmmo, meta=(AllowPrivateAccess=true))
	int32 _maxAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _canLaunchWhileOutOfAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ABaseProjectile* _debugProjectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBaseProjectileReplicationComponent* _projectileReplicationComponent;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetProjectileVar(FName varName, float value);

	UFUNCTION(BlueprintCallable)
	void SetProjectileProvider(TScriptInterface<IProjectileProvider> projectileProvider);

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_LaunchWithImpact(const FLaunchInfo& launchInfo, const FImpactInfo& impactInfo, ABaseProjectile* projectile);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_Launch(const FLaunchInfo& launchInfo, ABaseProjectile* projectile);

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_MaxAmmo(int32 oldMaxAmmo);

	UFUNCTION(BlueprintCallable)
	void OnRep_Ammo(int32 oldAmmo);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnLaunch(FLaunchInfo launchInfo, ABaseProjectile* projectile);

public:
	UFUNCTION(BlueprintCallable)
	void Local_Launch();

	UFUNCTION(BlueprintPure)
	bool IsLocallyControlled() const;

	UFUNCTION(BlueprintPure)
	bool IsAmmoFull() const;

	UFUNCTION(BlueprintPure)
	bool HasProjectile() const;

protected:
	UFUNCTION(BlueprintPure)
	bool HasAuthority() const;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	ABaseProjectile* GetProjectileToLaunch() const;

protected:
	UFUNCTION(BlueprintPure)
	APawn* GetOwningPawn() const;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetLaunchSpeedAtThrowPowerRatio(float throwPowerRatio) const;

protected:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetLaunchSpeed() const;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetLaunchPosition() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetLaunchDirectionAtViewAndThrowPowerRatio(FRotator viewRotation, float throwPowerRatio) const;

protected:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	FVector GetLaunchDirection() const;

public:
	UFUNCTION(BlueprintPure)
	int32 GetAmmo() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnOutOfAmmo();

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetMaxAmmo(int32 newMaxAmmo, bool isMaxAmmoImmutable);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ReturnAmmoUnits(int32 amountOfAmmoUnitsReturned);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Reload();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_Launch();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddMaxAmmo(int32 ammoToAdd);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBaseProjectileLauncher();
};

FORCEINLINE uint32 GetTypeHash(const UBaseProjectileLauncher) { return 0; }
