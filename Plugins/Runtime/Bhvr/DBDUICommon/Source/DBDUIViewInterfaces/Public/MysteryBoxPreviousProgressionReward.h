#pragma once

#include "CoreMinimal.h"
#include "MysteryBoxPreviousReward.h"
#include "EProgressionType.h"
#include "MysteryBoxPreviousProgressionReward.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UMysteryBoxPreviousProgressionReward : public UMysteryBoxPreviousReward
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EProgressionType Progression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Amount;

public:
	UMysteryBoxPreviousProgressionReward();
};

FORCEINLINE uint32 GetTypeHash(const UMysteryBoxPreviousProgressionReward) { return 0; }
