#pragma once

#include "CoreMinimal.h"
#include "AkWwiseObjectDetails.h"
#include "AkWwiseItemToControl.generated.h"

USTRUCT(BlueprintType)
struct FAkWwiseItemToControl
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkWwiseObjectDetails ItemPicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemPath;

public:
	AKAUDIO_API FAkWwiseItemToControl();
};

FORCEINLINE uint32 GetTypeHash(const FAkWwiseItemToControl) { return 0; }
