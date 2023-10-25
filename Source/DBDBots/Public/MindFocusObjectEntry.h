#pragma once

#include "CoreMinimal.h"
#include "MindFocusObjectEntry.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMindFocusObjectEntry
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UObject*> FocusedBy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FocusedStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, float> CooldownMap;

public:
	DBDBOTS_API FMindFocusObjectEntry();
};

FORCEINLINE uint32 GetTypeHash(const FMindFocusObjectEntry) { return 0; }
