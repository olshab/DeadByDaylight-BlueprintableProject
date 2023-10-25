#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreCategory.h"
#include "UserGameStats.generated.h"

USTRUCT(BlueprintType)
struct FUserGameStats
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool Disconnected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FearTokens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Skulls;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TMap<EDBDScoreCategory, int32> BonusBloodpoints;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<EDBDScoreCategory, int32> _bloodpoints;

public:
	DEADBYDAYLIGHT_API FUserGameStats();
};

FORCEINLINE uint32 GetTypeHash(const FUserGameStats) { return 0; }
