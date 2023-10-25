#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "BaseTooltipData.generated.h"

class UBaseTooltipWidget;

USTRUCT(BlueprintType)
struct FBaseTooltipData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector2D TouchPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftClassPtr<UBaseTooltipWidget> LeftTooltipWidgetAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftClassPtr<UBaseTooltipWidget> RightTooltipWidgetAsset;

public:
	DEADBYDAYLIGHT_API FBaseTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FBaseTooltipData) { return 0; }
