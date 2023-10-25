#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "CustomizationBaseAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationBaseAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CustomizationSlot1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CustomizationSlot2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CustomizationSlot3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Charm1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Charm2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Charm3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

public:
	DBDANALYTICS_API FCustomizationBaseAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationBaseAnalytics) { return 0; }
