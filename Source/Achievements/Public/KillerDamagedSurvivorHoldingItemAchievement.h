#pragma once

#include "CoreMinimal.h"
#include "KillerDamagedSurvivorBaseAchievement.h"
#include "KillerDamagedSurvivorHoldingItemAchievement.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTS_API UKillerDamagedSurvivorHoldingItemAchievement : public UKillerDamagedSurvivorBaseAchievement
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _statName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _allowBaseItemsInCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _allowSpecialItemsInCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _allowCursedItemsInCount;

public:
	UKillerDamagedSurvivorHoldingItemAchievement();
};

FORCEINLINE uint32 GetTypeHash(const UKillerDamagedSurvivorHoldingItemAchievement) { return 0; }
