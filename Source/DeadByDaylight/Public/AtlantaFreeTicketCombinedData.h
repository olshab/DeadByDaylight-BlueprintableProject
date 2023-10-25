#pragma once

#include "CoreMinimal.h"
#include "AtlantaFreeTicketUIData.h"
#include "EPlayerRole.h"
#include "AtlantaFreeTicketCombinedData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaFreeTicketCombinedData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAtlantaFreeTicketUIData UIData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DurationInMinutes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Quantity;

public:
	DEADBYDAYLIGHT_API FAtlantaFreeTicketCombinedData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaFreeTicketCombinedData) { return 0; }
