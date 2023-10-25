#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K29P02.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK29P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _revealRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _effectClass;

	UPROPERTY(EditAnywhere, Transient, Export)
	TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<UStatusEffect>> _survivorRevealedEffects;

public:
	UFUNCTION(BlueprintCallable)
	float GetRevealRange();

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnInRangeChanged(const bool inRange, ACamperPlayer* survivor);

public:
	UK29P02();
};

FORCEINLINE uint32 GetTypeHash(const UK29P02) { return 0; }
