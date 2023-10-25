#pragma once

#include "CoreMinimal.h"
#include "SkillCheckDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSkillCheckDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float SuccessZoneStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float SuccessZoneEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float BonusZoneLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float BonusZoneStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float ProgressRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float StartingTickerPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsDeactivatedAfterResponse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float WarningSoundDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAudioMuted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsJittering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSuccessZoneMirrorred;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsInsane;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsLocallyPredicted;

public:
	DEADBYDAYLIGHT_API FSkillCheckDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FSkillCheckDefinition) { return 0; }
