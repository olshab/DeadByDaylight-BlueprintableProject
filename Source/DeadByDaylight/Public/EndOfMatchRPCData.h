#pragma once

#include "CoreMinimal.h"
#include "EndOfMatchRPCData.generated.h"

USTRUCT(BlueprintType)
struct FEndOfMatchRPCData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString _jsonData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isValid;

public:
	DEADBYDAYLIGHT_API FEndOfMatchRPCData();
};

FORCEINLINE uint32 GetTypeHash(const FEndOfMatchRPCData) { return 0; }
