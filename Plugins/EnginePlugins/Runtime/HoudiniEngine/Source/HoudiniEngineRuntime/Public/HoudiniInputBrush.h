#pragma once

#include "CoreMinimal.h"
#include "Engine/Brush.h"
#include "HoudiniInputActor.h"
#include "HoudiniBrushInfo.h"
#include "HoudiniInputBrush.generated.h"

class UModel;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputBrush : public UHoudiniInputActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FHoudiniBrushInfo> BrushesInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	UModel* CombinedModel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIgnoreInputObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBrushType> CachedInputBrushType;

public:
	UHoudiniInputBrush();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputBrush) { return 0; }
