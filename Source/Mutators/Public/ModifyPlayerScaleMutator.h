#pragma once

#include "CoreMinimal.h"
#include "GameplayMutator.h"
#include "Templates/SubclassOf.h"
#include "ModifyPlayerScaleMutator.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UModifyPlayerScaleMutator : public UGameplayMutator
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _modifyLocomotionRateEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _locomotionSpeedRatio;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_ModifyScale(float scale);

public:
	UModifyPlayerScaleMutator();
};

FORCEINLINE uint32 GetTypeHash(const UModifyPlayerScaleMutator) { return 0; }
