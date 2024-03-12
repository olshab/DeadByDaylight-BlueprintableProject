#pragma once

#include "CoreMinimal.h"
#include "MysteryBoxPreviousReward.h"
#include "ECurrencyType.h"
#include "MysteryBoxPreviousCurrencyReward.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UMysteryBoxPreviousCurrencyReward : public UMysteryBoxPreviousReward
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType Currency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Amount;

public:
	UMysteryBoxPreviousCurrencyReward();
};

FORCEINLINE uint32 GetTypeHash(const UMysteryBoxPreviousCurrencyReward) { return 0; }
