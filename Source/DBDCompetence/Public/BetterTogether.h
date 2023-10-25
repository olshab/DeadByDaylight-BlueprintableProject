#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "BetterTogether.generated.h"

class UStatusEffect;
class ADBDPlayer;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBetterTogether : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldRevealKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldRevealSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RevealDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ADBDPlayer*> _affectedCampers;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _genToReveal;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _durationByLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _timedSurvivorRevealEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _timedKillerRevealEffect;

private:
	UFUNCTION()
	void OnStartedGeneratorRepair(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UFUNCTION(BlueprintCallable)
	float GetRevealDistance();

public:
	UBetterTogether();
};

FORCEINLINE uint32 GetTypeHash(const UBetterTogether) { return 0; }
