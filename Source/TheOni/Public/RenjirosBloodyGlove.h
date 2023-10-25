#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "RenjirosBloodyGlove.generated.h"

class ACamperPlayer;
class UBloodOrbOverlapRevealToKiller;
class AActor;
class ABloodOrb;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class URenjirosBloodyGlove : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _revealTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<ACamperPlayer*, UBloodOrbOverlapRevealToKiller*> _revealEffectPerCamper;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnBloodOrbOverlapBegin(const AActor* overlappingActor, const ABloodOrb* bloodOrb);

public:
	URenjirosBloodyGlove();
};

FORCEINLINE uint32 GetTypeHash(const URenjirosBloodyGlove) { return 0; }
