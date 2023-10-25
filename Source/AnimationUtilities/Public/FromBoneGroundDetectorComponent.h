#pragma once

#include "CoreMinimal.h"
#include "BaseGroundDetectorComponent.h"
#include "UObject/NoExportTypes.h"
#include "FromBoneGroundDetectorComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API UFromBoneGroundDetectorComponent : public UBaseGroundDetectorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _startOffset;

public:
	UFromBoneGroundDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFromBoneGroundDetectorComponent) { return 0; }
