#pragma once

#include "CoreMinimal.h"
#include "AkWwiseObjectDetails.generated.h"

USTRUCT(BlueprintType)
struct FAkWwiseObjectDetails
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemId;

public:
	AKAUDIO_API FAkWwiseObjectDetails();
};

FORCEINLINE uint32 GetTypeHash(const FAkWwiseObjectDetails) { return 0; }
