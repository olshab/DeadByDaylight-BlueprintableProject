#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AtlantaOnBoardingData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaOnBoardingData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName OnBoardingId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

public:
	DEADBYDAYLIGHT_API FAtlantaOnBoardingData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaOnBoardingData) { return 0; }
