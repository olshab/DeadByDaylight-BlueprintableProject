#pragma once

#include "CoreMinimal.h"
#include "SpecialEventLoadingTextData.h"
#include "LoadingTextContentData.generated.h"

USTRUCT(BlueprintType)
struct FLoadingTextContentData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSpecialEventLoadingTextData> LoadingText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool LoadingText_isset;

public:
	DEADBYDAYLIGHT_API FLoadingTextContentData();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingTextContentData) { return 0; }
