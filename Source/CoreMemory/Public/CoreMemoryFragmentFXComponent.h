#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "CoreMemoryFragmentFXComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoreMemoryFragmentFXComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFragmentCosmeticEvent, ADBDPlayer*, player);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFragmentCollectedCosmeticEvent, ADBDPlayer*, player, float, percentProgress);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFragmentCosmeticEventTwoParam, ADBDPlayer*, player, float, floatVal);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FFragmentCosmeticEvent Cosmetic_FragmentTriggered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FFragmentCosmeticEvent Cosmetic_FragmentSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FFragmentCosmeticEvent Cosmetic_FragmentDespawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FFragmentCollectedCosmeticEvent Cosmetic_FragmentCollected;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FRotator _tendrilMeshRotationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _hoverHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FFragmentCosmeticEventTwoParam Cosmetic_FragmentDespawnCountingDown;

public:
	UCoreMemoryFragmentFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentFXComponent) { return 0; }
