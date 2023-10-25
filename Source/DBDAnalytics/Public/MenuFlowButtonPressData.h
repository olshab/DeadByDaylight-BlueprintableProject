#pragma once

#include "CoreMinimal.h"
#include "MenuFlowButtonPressData.generated.h"

USTRUCT(BlueprintType)
struct FMenuFlowButtonPressData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Button;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ButtonPressTimestamp;

public:
	DBDANALYTICS_API FMenuFlowButtonPressData();
};

FORCEINLINE uint32 GetTypeHash(const FMenuFlowButtonPressData) { return 0; }
