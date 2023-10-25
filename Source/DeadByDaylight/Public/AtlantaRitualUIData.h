#pragma once

#include "CoreMinimal.h"
#include "EAltantaRitualUIType.h"
#include "AtlantaRitualRewardUIData.h"
#include "AtlantaSubRitualUIData.h"
#include "AtlantaRitualUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaRitualUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAltantaRitualUIType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsClaimed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProgressPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RefreshPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAtlantaRitualRewardUIData> Rewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAtlantaSubRitualUIData> SubRituals;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualUIData) { return 0; }
