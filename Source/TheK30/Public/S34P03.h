#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S34P03.generated.h"

class AGenerator;
class ADBDPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK30_API US34P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _generatorsInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<ADBDPlayer*, UStatusEffect*> _activeStatusEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _generatorRangeFromPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _repairSpeedModifierClass;

	UPROPERTY(EditAnywhere)
	float _repairSpeedValues;

public:
	UFUNCTION(BlueprintPure)
	float GetRepairSpeedAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetGeneratorRangeFromPlayer() const;

public:
	US34P03();
};

FORCEINLINE uint32 GetTypeHash(const US34P03) { return 0; }
