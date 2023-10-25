#pragma once

#include "CoreMinimal.h"
#include "SurvivorCosmeticHelperActor.h"
#include "K23SurvivorCosmeticHelperActor.generated.h"

UCLASS(Blueprintable)
class THEK23_API AK23SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_K23CamperHitByKnife(float lacerationPercentage);

public:
	AK23SurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK23SurvivorCosmeticHelperActor) { return 0; }
