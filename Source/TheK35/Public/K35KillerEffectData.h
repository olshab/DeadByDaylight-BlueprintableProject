#pragma once

#include "CoreMinimal.h"
#include "K35KillerEffectData.generated.h"

class ACamperPlayer;

USTRUCT(BlueprintType)
struct FK35KillerEffectData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACamperPlayer* OwningSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAffected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RemovalProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HadSightLastTick;

public:
	THEK35_API FK35KillerEffectData();
};

FORCEINLINE uint32 GetTypeHash(const FK35KillerEffectData) { return 0; }
