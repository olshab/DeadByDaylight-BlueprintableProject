#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "CustomKillerInstinctData.h"
#include "Templates/SubclassOf.h"
#include "K25Power.generated.h"

class AK25Gateway;
class UAuthoritativePoolProjectileProviderAdapter;
class UStatusEffect;
class ASlasherPlayer;
class ACamperPlayer;
class UChargeableComponent;
class AAnimationFollowerActor;
class AK25Husk;
class UK25SurvivorChainAttachmentComponent;
class UK25SurvivorChainTargetterComponent;
class AK25ControlledProjectile;
class ALamentConfiguration;
class UK25KillerTeleportationPositionFinderComponent;
class UDataTable;
class UK25ProjectileLauncher;
class UAuthoritativeActorPoolComponent;
class UInteractionAttacherComponent;
class UK25ChainAttachmentReplicationComponent;
class UPowerChargeComponent;
class UK25PowerChargePresentationItemProgressComponent;

UCLASS(Blueprintable)
class AK25Power : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UChargeableComponent* _k25ChainStrikeInteractionChargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UChargeableComponent* _k25TeleportChargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCustomKillerInstinctData> _customKillerInstinctDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UStatusEffect>> _survivorStatusEffectClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UStatusEffect>> _killerStatusEffectClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UK25SurvivorChainAttachmentComponent> _survivorChainAttachmentComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UK25SurvivorChainTargetterComponent> _survivorChainTargetterComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AK25Gateway> _k25GatewayClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AK25ControlledProjectile> _controlledProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ALamentConfiguration> _lamentConfigurationClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AK25Husk> _k25HuskClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UK25KillerTeleportationPositionFinderComponent> _killerTeleportFinderComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AAnimationFollowerActor> _chainAnimationActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UDataTable*> _chainAnimationMappingsTables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AAnimationFollowerActor> _pillarAnimationActorClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK25ProjectileLauncher* _k25ProjectileLauncher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _k25ProjectilePool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _k25ChainPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPowerChargeComponent* _k25PowerChargeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAuthoritativePoolProjectileProviderAdapter* _k25ProjectileProvider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK25PowerChargePresentationItemProgressComponent* _k25PowerPresentationItemProgressComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_K25Gateway, Transient, meta=(AllowPrivateAccess=true))
	AK25Gateway* _gateway;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_K25ControlledProjectile, Transient, meta=(AllowPrivateAccess=true))
	AK25ControlledProjectile* _controlledProjectileInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_LamentConfiguration, Transient, meta=(AllowPrivateAccess=true))
	ALamentConfiguration* _lamentConfiguration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK25Husk* _k25Husk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK25ChainAttachmentReplicationComponent* _chainAttachmentReplicationComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractionAttacherComponent* _interactionAttacherComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isPowerCharged;

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorAdded(ACamperPlayer* survivor, ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable)
	void OnRep_LamentConfiguration();

	UFUNCTION(BlueprintCallable)
	void OnRep_K25Gateway();

	UFUNCTION(BlueprintCallable)
	void OnRep_K25ControlledProjectile();

	UFUNCTION(BlueprintCallable)
	void OnKillerAdded(ASlasherPlayer* killer);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerInterruptSFX(ASlasherPlayer* killer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerInterruptOpenHatchSFX(ASlasherPlayer* killer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK25Power();
};

FORCEINLINE uint32 GetTypeHash(const AK25Power) { return 0; }
