#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerPerspectiveChangeTargetData.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FPlayerPerspectiveChangeTargetData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAFirstPersonView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraDistanceFromFPVLocationToToggleFPVOnPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketNameOnSceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Offset;

public:
	DEADBYDAYLIGHT_API FPlayerPerspectiveChangeTargetData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerPerspectiveChangeTargetData) { return 0; }
