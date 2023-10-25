#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexRetribution.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHexRetribution : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _obliviousDurationByLevels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _auraRevealDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealEffectClass;

public:
	UHexRetribution();
};

FORCEINLINE uint32 GetTypeHash(const UHexRetribution) { return 0; }
