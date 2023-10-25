#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "HopePerk.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHopePerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hopePerkEffect;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _hasteEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetHasteEffectAtLevel() const;

public:
	UHopePerk();
};

FORCEINLINE uint32 GetTypeHash(const UHopePerk) { return 0; }
