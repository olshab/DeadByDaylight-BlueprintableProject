#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "AnimationMontageDescriptor.h"
#include "Templates/SubclassOf.h"
#include "Addon_K28Power_18.generated.h"

class UStatusEffect;
class ALocker;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K28Power_18 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _survivorImposedEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _survivorStatusEffectTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lockersToSlamRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _montage;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_TriggerLockerAnimationOnAllLockers(const TArray<ALocker*>& lockers);

public:
	UAddon_K28Power_18();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K28Power_18) { return 0; }
