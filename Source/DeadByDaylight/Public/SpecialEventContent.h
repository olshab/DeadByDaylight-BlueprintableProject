#pragma once

#include "CoreMinimal.h"
#include "SpecialEventsContentData.h"
#include "SpecialEventsData.h"
#include "SpecialEventContent.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventContent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSpecialEventsContentData> SpecialEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSpecialEventsData> SpecialEventsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool SpecialEventsData_IsSet;

public:
	DEADBYDAYLIGHT_API FSpecialEventContent();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventContent) { return 0; }
