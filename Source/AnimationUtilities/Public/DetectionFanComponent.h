#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DetectionFanComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API UDetectionFanComponent : public USceneComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFloatRange _angleRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _originWorldOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _numberOfSpots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _defaultRingRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> _collisionChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USkeletalMeshComponent* _meshComponent;

public:
	UDetectionFanComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDetectionFanComponent) { return 0; }
