#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ErrorAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FErrorAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ErrorCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FloatField1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FloatField2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FloatField3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StringField1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StringField2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StringField3;

public:
	DBDANALYTICS_API FErrorAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FErrorAnalytics) { return 0; }
