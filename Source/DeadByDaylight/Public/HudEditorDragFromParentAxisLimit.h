#pragma once

#include "CoreMinimal.h"
#include "EHudEditorDragAxisOption.h"
#include "HudEditorDragFromParentAxisLimit.generated.h"

USTRUCT(BlueprintType)
struct FHudEditorDragFromParentAxisLimit
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Enable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHudEditorDragAxisOption AxisOption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinDragDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ScaleMinDragDistanceWithParent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDragDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ScaleMaxDragDistanceWithParent;

public:
	DEADBYDAYLIGHT_API FHudEditorDragFromParentAxisLimit();
};

FORCEINLINE uint32 GetTypeHash(const FHudEditorDragFromParentAxisLimit) { return 0; }
