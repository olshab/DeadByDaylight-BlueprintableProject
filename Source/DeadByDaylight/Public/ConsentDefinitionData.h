#pragma once

#include "CoreMinimal.h"
#include "ConsentDefinitionData.generated.h"

USTRUCT(BlueprintType)
struct FConsentDefinitionData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Platform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Sku;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Sku_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Language;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool NeedAcceptance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsMandatory;

public:
	DEADBYDAYLIGHT_API FConsentDefinitionData();
};

FORCEINLINE uint32 GetTypeHash(const FConsentDefinitionData) { return 0; }
