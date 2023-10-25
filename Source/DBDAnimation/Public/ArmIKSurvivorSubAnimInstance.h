#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "EArmIkMode.h"
#include "ArmIKSurvivorSubAnimInstance.generated.h"

class USkeletalMeshComponent;
class UArmDetectionFanComponent;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UArmIKSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _rightWristUpRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _leftWristUpRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFloatRange _localWristYawRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFloatRange _localWristPitchRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _armInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _handInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _alphaLerpTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _reachPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _rightArmIKAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _leftArmIKAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EArmIkMode _armIkMode;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UArmDetectionFanComponent* _rightDetectionFan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UArmDetectionFanComponent* _leftDetectionFan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _meshComponent;

public:
	UFUNCTION(BlueprintCallable)
	void ChangeMode(const EArmIkMode newMode);

public:
	UArmIKSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UArmIKSurvivorSubAnimInstance) { return 0; }
