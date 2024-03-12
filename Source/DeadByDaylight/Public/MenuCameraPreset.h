#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EDBDCameraViewType.h"
#include "MenuCameraView.h"
#include "MenuCameraViewTargetWithLabel.h"
#include "MenuCameraPreset.generated.h"

USTRUCT(BlueprintType)
struct FMenuCameraPreset: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EDBDCameraViewType, FMenuCameraView> Views;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMenuCameraViewTargetWithLabel> Targets;

public:
	DEADBYDAYLIGHT_API FMenuCameraPreset();
};

FORCEINLINE uint32 GetTypeHash(const FMenuCameraPreset) { return 0; }
