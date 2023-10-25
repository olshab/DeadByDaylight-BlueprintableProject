#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Brush.h"
#include "HoudiniBrushInfo.generated.h"

class ABrush;

USTRUCT(BlueprintType)
struct FHoudiniBrushInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<ABrush> BrushActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform CachedTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CachedOrigin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CachedExtent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBrushType> CachedBrushType;

	UPROPERTY(EditAnywhere)
	uint64 CachedSurfaceHash;

public:
	HOUDINIENGINERUNTIME_API FHoudiniBrushInfo();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniBrushInfo) { return 0; }
