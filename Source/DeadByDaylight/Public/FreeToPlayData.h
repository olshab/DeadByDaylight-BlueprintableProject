#pragma once

#include "CoreMinimal.h"
#include "FreeToPlayData.generated.h"

USTRUCT(BlueprintType)
struct FFreeToPlayData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString Start;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString End;

public:
	DEADBYDAYLIGHT_API FFreeToPlayData();
};

FORCEINLINE uint32 GetTypeHash(const FFreeToPlayData) { return 0; }
