#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Nemesis.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UNemesis : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _revealToKillerTime;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _obliviousTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _timedObliviousEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _obliviousStatusEffect;

public:
	UNemesis();
};

FORCEINLINE uint32 GetTypeHash(const UNemesis) { return 0; }
