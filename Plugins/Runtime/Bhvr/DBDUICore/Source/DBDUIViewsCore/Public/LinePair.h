#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LinePair.generated.h"

USTRUCT(BlueprintType)
struct FLinePair
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D start;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D end;

public:
	DBDUIVIEWSCORE_API FLinePair();
};

FORCEINLINE uint32 GetTypeHash(const FLinePair) { return 0; }
