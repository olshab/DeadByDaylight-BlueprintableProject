#pragma once

#include "CoreMinimal.h"
#include "ConsentContentVersionData.h"
#include "ConsentContentData.generated.h"

USTRUCT(BlueprintType)
struct FConsentContentData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FConsentContentVersionData> Versions;

public:
	DEADBYDAYLIGHT_API FConsentContentData();
};

FORCEINLINE uint32 GetTypeHash(const FConsentContentData) { return 0; }
