#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "BloodWarden.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBloodWarden : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _bloodWardenBlockerStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealPlayerStatusEffectClass;

	UPROPERTY(EditAnywhere)
	float _perkLevelSpikeDurations;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkLevelSpikeDurationsAtLevel() const;

public:
	UBloodWarden();
};

FORCEINLINE uint32 GetTypeHash(const UBloodWarden) { return 0; }
