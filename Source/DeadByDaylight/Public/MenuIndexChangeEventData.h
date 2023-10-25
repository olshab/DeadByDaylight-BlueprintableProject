#pragma once

#include "CoreMinimal.h"
#include "MenuIndexChangeEventData.generated.h"

USTRUCT(BlueprintType)
struct FMenuIndexChangeEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Index;

public:
	DEADBYDAYLIGHT_API FMenuIndexChangeEventData();
};

FORCEINLINE uint32 GetTypeHash(const FMenuIndexChangeEventData) { return 0; }
