#pragma once

#include "CoreMinimal.h"
#include "DisabledItemData.generated.h"

USTRUCT(BlueprintType)
struct FDisabledItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> GameTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool GameTypes_IsSet;

public:
	DEADBYDAYLIGHT_API FDisabledItemData();
};

FORCEINLINE uint32 GetTypeHash(const FDisabledItemData) { return 0; }
