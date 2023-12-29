#pragma once

#include "CoreMinimal.h"
#include "StatusEffectSpawnData.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "PlayerStatusEffectSpawnerHelper.h"
#include "DBDTunableRowHandle.h"
#include "OnryoPower.generated.h"

class AOnryoTelevision;
class UManifestationComponent;
class UCondemnedComponent;
class UOnryoTeleportTargeterComponent;
class UInteractionDefinition;

UCLASS(Blueprintable)
class AOnryoPower : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UCondemnedComponent> _condemnedComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UManifestationComponent> _manifestationComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FStatusEffectSpawnData> _effects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _teleportCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FPlayerStatusEffectSpawnerHelper _effectSpawner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UOnryoTeleportTargeterComponent* _televisionTargeter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UManifestationComponent* _manifestationComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	TArray<AOnryoTelevision*> _televisions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AOnryoTelevision> _televisionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _onryoPowerCooldownInteraction;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void PowerCooldownEnd_Cosmetic();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AOnryoPower();
};

FORCEINLINE uint32 GetTypeHash(const AOnryoPower) { return 0; }
