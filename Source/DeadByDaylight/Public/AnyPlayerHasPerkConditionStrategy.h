#pragma once

#include "CoreMinimal.h"
#include "BaseSpawnConditionStrategy.h"
#include "PerkIdDropdown.h"
#include "EPlayerRole.h"
#include "AnyPlayerHasPerkConditionStrategy.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UAnyPlayerHasPerkConditionStrategy : public UBaseSpawnConditionStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EPlayerRole _playerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FPerkIdDropdown _perk;

public:
	UAnyPlayerHasPerkConditionStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UAnyPlayerHasPerkConditionStrategy) { return 0; }
