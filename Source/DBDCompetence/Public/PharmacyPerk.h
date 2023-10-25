#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "PharmacyPerk.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UPharmacyPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _pharmacyEffectClass;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _searchSpeeds;

public:
	UFUNCTION(BlueprintPure)
	float GetSearchSpeedAtLevel() const;

public:
	UPharmacyPerk();
};

FORCEINLINE uint32 GetTypeHash(const UPharmacyPerk) { return 0; }
