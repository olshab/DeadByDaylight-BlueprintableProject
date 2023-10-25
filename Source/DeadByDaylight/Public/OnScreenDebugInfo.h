#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnScreenDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FOnScreenDebugInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Message;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor Color;

	UPROPERTY(EditAnywhere)
	uint64 Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeToDisplay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDrawDebug;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector DrawDebugLocation;

public:
	DEADBYDAYLIGHT_API FOnScreenDebugInfo();
};

FORCEINLINE uint32 GetTypeHash(const FOnScreenDebugInfo) { return 0; }
