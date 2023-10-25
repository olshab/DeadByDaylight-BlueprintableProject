#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "MeshRotationCorrectionSubAnimInstance.generated.h"

class UCharacterMovementComponent;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UMeshRotationCorrectionSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _rotationInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FRotator _toSlopeRotation;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCharacterMovementComponent* _movementComponent;

public:
	UMeshRotationCorrectionSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UMeshRotationCorrectionSubAnimInstance) { return 0; }
