#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S34P03.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK30_API US34P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<ADBDPlayer*, UStatusEffect*> _activeStatusEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _repairSpeedModifierClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealGeneratorAurasInRangeEffectClass;

	UPROPERTY(EditAnywhere)
	float _repairSpeedValues;

	UPROPERTY(EditAnywhere)
	float _generatorRanges;

public:
	UFUNCTION(BlueprintPure)
	float GetRepairSpeedAtLevel() const;

public:
	US34P03();
};

FORCEINLINE uint32 GetTypeHash(const US34P03) { return 0; }
