#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K26PathData.generated.h"

USTRUCT(BlueprintType)
struct FK26PathData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsVisibleToKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsVisibleForSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxVisibleIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> PathPartLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRotator> PathPartRotations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector PathEndLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator PathEndRotation;

public:
	THEK26_API FK26PathData();
};

FORCEINLINE uint32 GetTypeHash(const FK26PathData) { return 0; }
