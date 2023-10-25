#pragma once

#include "CoreMinimal.h"
#include "ConsentContentVersionData.generated.h"

USTRUCT(BlueprintType)
struct FConsentContentVersionData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 EntryDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FString> Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FString> Content;

public:
	DEADBYDAYLIGHT_API FConsentContentVersionData();
};

FORCEINLINE uint32 GetTypeHash(const FConsentContentVersionData) { return 0; }
