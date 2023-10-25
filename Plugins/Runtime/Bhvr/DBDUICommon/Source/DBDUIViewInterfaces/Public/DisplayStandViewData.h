#pragma once

#include "CoreMinimal.h"
#include "Components/CanvasPanelSlot.h"
#include "DisplayStandViewData.generated.h"

USTRUCT(BlueprintType)
struct FDisplayStandViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnchorData Anchors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PositionX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PositionY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SizeX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SizeY;

public:
	DBDUIVIEWINTERFACES_API FDisplayStandViewData();
};

FORCEINLINE uint32 GetTypeHash(const FDisplayStandViewData) { return 0; }
