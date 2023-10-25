#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32SurvivorStatus.generated.h"

class ACamperPlayer;

USTRUCT(BlueprintType)
struct FK32SurvivorStatus
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ACamperPlayer* OwningSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAssimilated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FVector> RecentLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NotReplicated, Transient)
	TMap<ACamperPlayer*, float> Authority_CrossAssimilationStartedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NotReplicated, Transient)
	bool Authority_IsBeingCrossAssimilated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NotReplicated, Transient)
	bool Authority_CanBeAffectedByPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NotReplicated, Transient)
	float Authority_LastTimeCanBeAffectedByPowerEnabled;

public:
	THEK32_API FK32SurvivorStatus();
};

FORCEINLINE uint32 GetTypeHash(const FK32SurvivorStatus) { return 0; }
