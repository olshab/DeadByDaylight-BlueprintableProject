#pragma once

#include "CoreMinimal.h"
#include "ReleaseSavedData.generated.h"

USTRUCT(BlueprintType)
struct FReleaseSavedData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool NewChapterPopupSeen;

public:
	DEADBYDAYLIGHT_API FReleaseSavedData();
};

FORCEINLINE uint32 GetTypeHash(const FReleaseSavedData) { return 0; }
