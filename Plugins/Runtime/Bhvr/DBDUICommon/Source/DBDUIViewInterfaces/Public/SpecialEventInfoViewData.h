#pragma once

#include "CoreMinimal.h"
#include "SpecialEventInfoViewData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventInfoViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString EventBannerFrameLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString EventThemeFrameLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText EventName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsPastEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString BloodwebCollectSoundEvent;

public:
	DBDUIVIEWINTERFACES_API FSpecialEventInfoViewData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventInfoViewData) { return 0; }
