#pragma once

#include "CoreMinimal.h"
#include "SpecialEventsContentData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventsContentData
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MainEndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PostEndTime;

public:
	DEADBYDAYLIGHT_API FSpecialEventsContentData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventsContentData) { return 0; }
