#pragma once

#include "CoreMinimal.h"
#include "MapCoordData.generated.h"

USTRUCT(BlueprintType)
struct FMapCoordData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 X;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Z;

public:
	DBDANALYTICS_API FMapCoordData();
};

FORCEINLINE uint32 GetTypeHash(const FMapCoordData) { return 0; }
