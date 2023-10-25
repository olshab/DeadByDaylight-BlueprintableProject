#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "S38P01.generated.h"

class ACollectable;
class UAnimInstance;
class UActivatableExposedEffect;
class UActivatableStatusEffect;
class UActivatableExhaustedEffect;
class US38P01Interaction;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US38P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UAnimInstance> _S38P01AnimInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UActivatableExposedEffect> _exposedStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UActivatableExposedEffect* _exposedEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _exposedDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UActivatableStatusEffect> _hasteStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UActivatableStatusEffect* _hasteEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _hasteAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _hasteDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UActivatableExhaustedEffect> _exhaustionEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UActivatableExhaustedEffect* _exhaustionEffect;

	UPROPERTY(EditAnywhere)
	float _exhaustionDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<ACollectable>> _collectableClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FName> _unsupportedItemAddons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<US38P01Interaction> _interactionBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _animationDuration;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnSecondaryPerkEffect(bool shouldScream);

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnAnimationStart();

public:
	UFUNCTION(BlueprintPure)
	TArray<FName> GetUnsupportedItemAddons() const;

	UFUNCTION(BlueprintPure)
	float GetHasteDuration() const;

	UFUNCTION(BlueprintPure)
	float GetHasteAmount() const;

	UFUNCTION(BlueprintPure)
	float GetExposedDuration() const;

	UFUNCTION(BlueprintPure)
	float GetExhaustionDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	TArray<TSubclassOf<ACollectable>> GetCollectableClasses() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_MakeSurvivorScream();

private:
	UFUNCTION()
	void Authority_OnPerkActivated(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintCallable)
	void Authority_OnAnimationFinish();

	UFUNCTION(BlueprintCallable)
	void Authority_GiveSecondaryPerkEffect();

public:
	US38P01();
};

FORCEINLINE uint32 GetTypeHash(const US38P01) { return 0; }
