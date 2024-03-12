#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "EventObjectiveTargetData.h"
#include "SpecialEventCommunityChallengeData.h"
#include "EventObjectiveTrackerViewData.generated.h"

class UMaterialInterface;
class UTexture2D;

USTRUCT(BlueprintType)
struct FEventObjectiveTrackerViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GlobalProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NextProgression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GlobalBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 IndexOfLastTargetReached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEventObjectiveTargetData> BonusTargetsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSpecialEventCommunityChallengeData CommunityChallengeData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInterface> BannerMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> LabelTexture;

public:
	DBDUIVIEWINTERFACES_API FEventObjectiveTrackerViewData();
};

FORCEINLINE uint32 GetTypeHash(const FEventObjectiveTrackerViewData) { return 0; }
