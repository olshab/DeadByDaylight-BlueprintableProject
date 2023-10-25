#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "PlayerRankData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerRankData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString MirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PlayerRankForRole;

public:
	DEADBYDAYLIGHT_API FPlayerRankData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerRankData) { return 0; }
