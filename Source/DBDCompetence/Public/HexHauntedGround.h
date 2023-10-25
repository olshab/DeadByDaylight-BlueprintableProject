#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexHauntedGround.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHexHauntedGround : public UHexPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _exposedStatusEffectDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _exposedStatusEffectClass;

public:
	UFUNCTION(BlueprintPure)
	float GetExposedDurationAtLevel() const;

public:
	UHexHauntedGround();
};

FORCEINLINE uint32 GetTypeHash(const UHexHauntedGround) { return 0; }
