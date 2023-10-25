#pragma once

#include "CoreMinimal.h"
#include "MapSelectionWeight.generated.h"

USTRUCT(BlueprintType)
struct FMapSelectionWeight
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ThemeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

public:
	DBDANALYTICS_API FMapSelectionWeight();
};

FORCEINLINE uint32 GetTypeHash(const FMapSelectionWeight) { return 0; }
