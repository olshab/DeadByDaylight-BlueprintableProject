#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ETooltipType.h"
#include "Templates/SubclassOf.h"
#include "TooltipWidgetData.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FTooltipWidgetData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipType TooltipType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> WidgetClass;

public:
	DBDUIVIEWSCORE_API FTooltipWidgetData();
};

FORCEINLINE uint32 GetTypeHash(const FTooltipWidgetData) { return 0; }
