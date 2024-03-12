#pragma once

#include "CoreMinimal.h"
#include "EDBDCameraViewType.h"
#include "Engine/DataAsset.h"
#include "MenuCameraView.h"
#include "Templates/SubclassOf.h"
#include "MenuCameraDesignTunables.generated.h"

class AMenuCameraActor;
class UCurveFloat;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UMenuCameraDesignTunables : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<AMenuCameraActor> CameraClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* TransitionCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize)
	TMap<EDBDCameraViewType, FMenuCameraView> Views;

public:
	UMenuCameraDesignTunables();
};

FORCEINLINE uint32 GetTypeHash(const UMenuCameraDesignTunables) { return 0; }
