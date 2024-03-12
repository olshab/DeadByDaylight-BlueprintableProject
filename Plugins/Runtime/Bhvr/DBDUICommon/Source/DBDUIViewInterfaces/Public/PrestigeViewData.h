#pragma once

#include "CoreMinimal.h"
#include "PrestigeViewData.generated.h"

USTRUCT(BlueprintType)
struct FPrestigeViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float Progress;

public:
	DBDUIVIEWINTERFACES_API FPrestigeViewData();
};

FORCEINLINE uint32 GetTypeHash(const FPrestigeViewData) { return 0; }
