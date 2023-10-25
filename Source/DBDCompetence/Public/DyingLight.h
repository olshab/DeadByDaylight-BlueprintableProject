#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "DyingLight.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDyingLight : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<float> _actionSpeedPenaltyPerToken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _obsessionActionSpeedBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _obsessionStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _nonObsessionStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStatusEffect*> _survivorDebuffs;

private:
	UFUNCTION(BlueprintCallable)
	void OnObsessionChanged(ACamperPlayer* newObsession, ACamperPlayer* previousObsession);

public:
	UFUNCTION(BlueprintPure)
	float GetObsessionActionSpeedBonus() const;

	UFUNCTION(BlueprintPure)
	float GetActionSpeedPenaltyPerTokenAtLevel() const;

public:
	UDyingLight();
};

FORCEINLINE uint32 GetTypeHash(const UDyingLight) { return 0; }
