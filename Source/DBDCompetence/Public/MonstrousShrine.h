#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "MonstrousShrine.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UMonstrousShrine : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _fasterDrainPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _fasterDrainOnScourgeHookEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetFasterDrainPercentageAtLevel() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorUnhookedOnScourgeHook(const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorHookedOnScourgeHook(const FGameEventData& gameEventData);

public:
	UMonstrousShrine();
};

FORCEINLINE uint32 GetTypeHash(const UMonstrousShrine) { return 0; }
