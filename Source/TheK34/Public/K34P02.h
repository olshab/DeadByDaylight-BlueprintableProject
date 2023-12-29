#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K34P02.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK34P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _exposedStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _exposedStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _survivorAuraRevealClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _survivorAuraRevealEffect;

	UPROPERTY(EditAnywhere)
	float _exposedEffectTime;

	UPROPERTY(EditAnywhere)
	float _auraRevealEffectTime;

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RevealAndMakeSurvivorScream(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_RevealAndMakeSurvivorScream(ACamperPlayer* survivorPlayer);

public:
	UK34P02();
};

FORCEINLINE uint32 GetTypeHash(const UK34P02) { return 0; }
