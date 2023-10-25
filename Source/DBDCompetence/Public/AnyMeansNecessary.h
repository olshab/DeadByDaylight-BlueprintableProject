#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "AnyMeansNecessary.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UAnyMeansNecessary : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _actionSpeedBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _anyMeansNecessaryActionSpeedEffect;

private:
	UFUNCTION()
	void Authority_OnPalletPulledUp(const FGameplayTag gameplayTag, const FGameEventData& gameEventData) const;

public:
	UAnyMeansNecessary();
};

FORCEINLINE uint32 GetTypeHash(const UAnyMeansNecessary) { return 0; }
