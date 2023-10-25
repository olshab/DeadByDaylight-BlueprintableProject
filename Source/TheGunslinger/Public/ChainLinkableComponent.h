#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChainLinkable.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "ChainLinkableComponent.generated.h"

class UChainPlayerMovementStatusEffect;
class URiflePlayerLinker;
class UBaseCameraTargetingStrategy;
class UPlayerReelInputAccelerationConstraintStrategy;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UChainLinkableComponent : public UActorComponent, public IChainLinkable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UBaseCameraTargetingStrategy> _cameraTargetingStrategyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _movementStatusEffectName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _linkedStatusEffectName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UPlayerReelInputAccelerationConstraintStrategy* _inputAccelerationStrategy;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	URiflePlayerLinker* _chainLink;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FTagStateBool _isLinkedLingering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Export, meta=(AllowPrivateAccess=true))
	UChainPlayerMovementStatusEffect* _movementStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBaseCameraTargetingStrategy* _cameraStrategy;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UChainLinkableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UChainLinkableComponent) { return 0; }
