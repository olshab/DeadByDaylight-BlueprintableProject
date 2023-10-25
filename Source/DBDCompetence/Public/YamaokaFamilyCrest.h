#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "YamaokaFamilyCrest.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UYamaokaFamilyCrest : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _revealDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _revealRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealAuraToKillerEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _survivorsToReveal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_AddonActivationCount, Transient, meta=(AllowPrivateAccess=true))
	uint8 _addonActivationCount;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RevealSurvivor(ACamperPlayer* survivorToReveal);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_AddonActivationCount();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UYamaokaFamilyCrest();
};

FORCEINLINE uint32 GetTypeHash(const UYamaokaFamilyCrest) { return 0; }
