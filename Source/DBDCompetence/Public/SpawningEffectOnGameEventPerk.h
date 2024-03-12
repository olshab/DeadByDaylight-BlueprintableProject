#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "SpawningEffectOnGameEventData.h"
#include "ESpawningEffectGameEventSubject.h"
#include "SpawningEffectOnGameEventPerk.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USpawningEffectOnGameEventPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldStartActivationTimerOnGameEventWithLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldCheckIfOwnerIsInstigatorOrTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _gameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	ESpawningEffectGameEventSubject _subjectType;

	UPROPERTY(EditAnywhere)
	FSpawningEffectOnGameEventData _statusEffects;

public:
	UFUNCTION(BlueprintCallable)
	float GetLifetimeOfStatusEffectAtLevel();

	UFUNCTION(BlueprintCallable)
	float GetCustomParameterOfStatusEffectAtLevel();

public:
	USpawningEffectOnGameEventPerk();
};

FORCEINLINE uint32 GetTypeHash(const USpawningEffectOnGameEventPerk) { return 0; }
