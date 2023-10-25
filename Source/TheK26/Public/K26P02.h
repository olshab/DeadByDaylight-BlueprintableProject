#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "K26P02.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK26P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _generatorRegressPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<ACamperPlayer*> _hookedPlayers;

public:
	UFUNCTION(BlueprintPure)
	float GetGeneratorRegressPercentageAtLevel() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSurvivorHookedOnScourgeHook(const FGameEventData& gameEventData);

public:
	UK26P02();
};

FORCEINLINE uint32 GetTypeHash(const UK26P02) { return 0; }
