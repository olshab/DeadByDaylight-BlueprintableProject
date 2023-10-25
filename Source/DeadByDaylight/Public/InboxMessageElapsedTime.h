#pragma once

#include "CoreMinimal.h"
#include "EInboxMessageTimeUnit.h"
#include "InboxMessageElapsedTime.generated.h"

USTRUCT(BlueprintType)
struct FInboxMessageElapsedTime
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ElapsedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInboxMessageTimeUnit TimeUnit;

public:
	DEADBYDAYLIGHT_API FInboxMessageElapsedTime();
};

FORCEINLINE uint32 GetTypeHash(const FInboxMessageElapsedTime) { return 0; }
