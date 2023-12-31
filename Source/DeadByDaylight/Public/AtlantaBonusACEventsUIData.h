#pragma once

#include "CoreMinimal.h"
#include "AtlantaBaseEventsUIData.h"
#include "AtlantaAuricCellPacksUIData.h"
#include "AtlantaBonusACEventsUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaBonusACEventsUIData: public FAtlantaBaseEventsUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAtlantaAuricCellPacksUIData auricPacksData;

public:
	DEADBYDAYLIGHT_API FAtlantaBonusACEventsUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaBonusACEventsUIData) { return 0; }
