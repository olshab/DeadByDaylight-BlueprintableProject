#pragma once

#include "CoreMinimal.h"
#include "ERefundSource.h"
#include "RefundKeyUIData.generated.h"

USTRUCT(BlueprintType)
struct FRefundKeyUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ERefundSource Source;

public:
	DEADBYDAYLIGHT_API FRefundKeyUIData();
};

FORCEINLINE uint32 GetTypeHash(const FRefundKeyUIData) { return 0; }
