#pragma once

#include "CoreMinimal.h"
#include "ItemUIData.h"
#include "BundleData.generated.h"

USTRUCT(BlueprintType)
struct FBundleData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemUIData UIData;

public:
	DEADBYDAYLIGHT_API FBundleData();
};

FORCEINLINE uint32 GetTypeHash(const FBundleData) { return 0; }
