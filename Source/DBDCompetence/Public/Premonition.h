#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Premonition.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UPremonition : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _perkFrequency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _perkEffectRange;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnPerkActivate();

public:
	UFUNCTION(BlueprintPure)
	float GetPerkFrequencyAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetPerkEffectRange() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPerkActivate();

public:
	UPremonition();
};

FORCEINLINE uint32 GetTypeHash(const UPremonition) { return 0; }
