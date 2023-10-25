#pragma once

#include "CoreMinimal.h"
#include "BaseGroundDetectorComponent.h"
#include "UObject/NoExportTypes.h"
#include "FootGroundDetectorComponent.generated.h"

class UCharacterMovementComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API UFootGroundDetectorComponent : public UBaseGroundDetectorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _hipTransformName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _slopeStartOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _footLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _traceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxWalkableSlopeAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCharacterMovementComponent* _movementComp;

public:
	UFootGroundDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFootGroundDetectorComponent) { return 0; }
