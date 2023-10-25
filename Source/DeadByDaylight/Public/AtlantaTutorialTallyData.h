#pragma once

#include "CoreMinimal.h"
#include "AtlantaTutorialTallyData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaTutorialTallyData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FirstTimeCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BloodpointsScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AuricCells;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FearTokens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Characters;

public:
	DEADBYDAYLIGHT_API FAtlantaTutorialTallyData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaTutorialTallyData) { return 0; }
