#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Coulrophobia.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoulrophobia : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _coulrophobiaEffect;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _healPenalty;

public:
	UFUNCTION(BlueprintPure)
	float GetHealPenaltyAtLevel() const;

public:
	UCoulrophobia();
};

FORCEINLINE uint32 GetTypeHash(const UCoulrophobia) { return 0; }
