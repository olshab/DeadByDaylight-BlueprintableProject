#pragma once

#include "CoreMinimal.h"
#include "SpecialEventUIInfo.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventUIInfo
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
	DEADBYDAYLIGHT_API FSpecialEventUIInfo();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventUIInfo) { return 0; }
