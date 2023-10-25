#pragma once

#include "CoreMinimal.h"
#include "FeatureLocksContentData.h"
#include "FeatureLocksContent.generated.h"

USTRUCT(BlueprintType)
struct FFeatureLocksContent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FFeatureLocksContentData> FeatureLocks;

public:
	DEADBYDAYLIGHT_API FFeatureLocksContent();
};

FORCEINLINE uint32 GetTypeHash(const FFeatureLocksContent) { return 0; }
