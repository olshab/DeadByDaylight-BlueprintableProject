#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexDevourHope.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHexDevourHope : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _devourHopeSpeedStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _exposedStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _rangeFromUnhookedSurvivorNeeded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _tokenThresholdToImposeSpeedBoost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _tokenThresholdToImposeExposeEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _tokenThresholdToImposeAbilityToKill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _attackGameEvents;

	UPROPERTY(EditAnywhere)
	float _moveSpeedIncrement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _vulnerabilityStatusViewID;

public:
	UFUNCTION(BlueprintPure)
	float GetRangeFromUnhookedSurvivorNeeded(int32 perkLevel) const;

	UFUNCTION(BlueprintPure)
	float GetMoveSpeedIncrement(int32 perkLevel) const;

public:
	UHexDevourHope();
};

FORCEINLINE uint32 GetTypeHash(const UHexDevourHope) { return 0; }
