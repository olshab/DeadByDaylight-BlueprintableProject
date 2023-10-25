#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "K26SurvivorStatus.generated.h"

class AK26AttachedCrow;
class ACamperPlayer;
class AActor;
class UK26KillerInstinctStatusEffect;

USTRUCT(BlueprintType)
struct FK26SurvivorStatus
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsPowerAttached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAttachementAuraOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NotReplicated, Transient)
	float LastAttachmentTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NotReplicated, Transient)
	float LastDetachmentTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NotReplicated, Transient)
	float LastRemovalStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NotReplicated, Transient)
	float LastRemovalStopped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NotReplicated, Transient)
	float LastHitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AK26AttachedCrow* StatusIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ACamperPlayer* OwningSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UK26KillerInstinctStatusEffect* K26KillerInstinctStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<AActor*> IdleCrowsBeingTouched;

	UPROPERTY(EditAnywhere, NotReplicated, Transient)
	FTimerHandle KillerInstinctTimeHandler;

public:
	THEK26_API FK26SurvivorStatus();
};

FORCEINLINE uint32 GetTypeHash(const FK26SurvivorStatus) { return 0; }
