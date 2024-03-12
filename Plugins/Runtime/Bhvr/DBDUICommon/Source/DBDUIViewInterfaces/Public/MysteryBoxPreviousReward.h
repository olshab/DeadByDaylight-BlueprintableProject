#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERewardType.h"
#include "MysteryBoxPreviousReward.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UMysteryBoxPreviousReward : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ERewardType Type;

public:
	UMysteryBoxPreviousReward();
};

FORCEINLINE uint32 GetTypeHash(const UMysteryBoxPreviousReward) { return 0; }
