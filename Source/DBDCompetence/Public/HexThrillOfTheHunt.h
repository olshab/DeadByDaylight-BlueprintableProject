#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexThrillOfTheHunt.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHexThrillOfTheHunt : public UHexPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _thrillOfTheHuntStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _hunterPointsBonusPercent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _survivorThrillOfTheHuntEffects;

public:
	UHexThrillOfTheHunt();
};

FORCEINLINE uint32 GetTypeHash(const UHexThrillOfTheHunt) { return 0; }
