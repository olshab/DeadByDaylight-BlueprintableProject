#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PlayerCardAnimationSettingAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCardAnimationSettingAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AnimationSetting;

public:
	DBDANALYTICS_API FPlayerCardAnimationSettingAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerCardAnimationSettingAnalytics) { return 0; }
