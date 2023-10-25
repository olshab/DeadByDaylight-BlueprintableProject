#pragma once

#include "CoreMinimal.h"
#include "OrangeGlyphAffectedActionTakenDelegate.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "OrangeGlyphChallengeCompletedDelegate.h"
#include "OrangeGlyphComponent.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOrangeGlyphComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOrangeGlyphChallengeCompletedDelegate ChallengeCompletedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOrangeGlyphAffectedActionTakenDelegate AffectedActionTakenDelegate;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numHookedSurvivorsRequired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numInactiveHookStatesToDespawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numHookActionsWhileActive;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _hookEvents;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _hookStateEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UStatusEffect>> _statusEffectClasses;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _eventsThatCauseEffects;

private:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void Cosmetic_ApplyNegativeEffects(ADBDPlayer* affectedPlayer);

public:
	UOrangeGlyphComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOrangeGlyphComponent) { return 0; }
