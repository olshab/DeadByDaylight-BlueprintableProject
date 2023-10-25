#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "HarpoonRifle.generated.h"

class UChainLinkableComponent;
class UHarpoonChainPositioner;
class URiflePlayerLinker;
class ARifleChain;
class UHarpoonProviderComponent;
class UChargeableComponent;
class UHarpoonLauncher;
class UTriggerableActivatorComponent;
class URifleChainTensionComponent;
class UFireHarpoonRifleInteraction;

UCLASS(Blueprintable)
class THEGUNSLINGER_API AHarpoonRifle : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UChainLinkableComponent> _survivorLinkableClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UChainLinkableComponent> _killerLinkableClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ARifleChain> _chainClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _rifleMuzzleSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _rifleHarpoonLoadingSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _crowActiveRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UHarpoonLauncher* _launcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UHarpoonProviderComponent* _harpoonProvider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ARifleChain* _chain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	URifleChainTensionComponent* _chainTensionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _chainTensionChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	URiflePlayerLinker* _playerLinker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UHarpoonChainPositioner* _harpoonChainPositioner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UFireHarpoonRifleInteraction* _fireInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTriggerableActivatorComponent* _crowsActivatorComponent;

public:
	UFUNCTION(BlueprintPure)
	ARifleChain* GetChain() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnFireHarpoon();

public:
	AHarpoonRifle();
};

FORCEINLINE uint32 GetTypeHash(const AHarpoonRifle) { return 0; }
