#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "ItemData.h"
#include "AtlantaFreeTicketUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaFreeTicketUIData: public FItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor IconColor;

public:
	DEADBYDAYLIGHT_API FAtlantaFreeTicketUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaFreeTicketUIData) { return 0; }
