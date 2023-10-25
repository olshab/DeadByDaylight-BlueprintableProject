#pragma once

#include "CoreMinimal.h"
#include "MenuFlowTabData.generated.h"

USTRUCT(BlueprintType)
struct FMenuFlowTabData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CurrentTab;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PreviousTab;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeOnPreviousTab;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TabChangeTimestamp;

public:
	DBDANALYTICS_API FMenuFlowTabData();
};

FORCEINLINE uint32 GetTypeHash(const FMenuFlowTabData) { return 0; }
