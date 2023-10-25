#pragma once

#include "CoreMinimal.h"
#include "XpBonusData.generated.h"

USTRUCT(BlueprintType)
struct FXpBonusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 XpValue;

public:
	DEADBYDAYLIGHT_API FXpBonusData();
};

FORCEINLINE uint32 GetTypeHash(const FXpBonusData) { return 0; }
