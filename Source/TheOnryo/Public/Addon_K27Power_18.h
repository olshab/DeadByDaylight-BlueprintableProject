#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GameEventData.h"
#include "Addon_K27Power_18.generated.h"

class ACollectable;
class ADBDPlayer;
class UActivatableStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K27Power_18 : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACollectable> _vhsCollectableBP;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _revealTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UActivatableStatusEffect> _revealAuraToKillerEffectClass;

	UPROPERTY(EditAnywhere, Transient, Export)
	TMap<TWeakObjectPtr<ADBDPlayer>, UActivatableStatusEffect*> _revealAuraToKillerPerSurvivor;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_SpawnInVHSTape();

	UFUNCTION()
	void Authority_OnSurvivorInsertVHS(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroCompleted();

public:
	UAddon_K27Power_18();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K27Power_18) { return 0; }
