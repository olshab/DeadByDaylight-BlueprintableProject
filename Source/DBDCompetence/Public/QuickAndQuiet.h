#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "QuickAndQuiet.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UQuickAndQuiet : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _rushedActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _silentRushedActionStatusEffect;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _cooldownDurationSeconds;

public:
	UFUNCTION(BlueprintPure)
	float GetCooldownDurationSecondsAtLevel() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnPlayerRushedActionFinished();

public:
	UQuickAndQuiet();
};

FORCEINLINE uint32 GetTypeHash(const UQuickAndQuiet) { return 0; }
