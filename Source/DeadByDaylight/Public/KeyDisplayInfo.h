#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FKeyDisplayInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FKey Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString KeyDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PromptType;

public:
	DEADBYDAYLIGHT_API FKeyDisplayInfo();
};

FORCEINLINE uint32 GetTypeHash(const FKeyDisplayInfo) { return 0; }
