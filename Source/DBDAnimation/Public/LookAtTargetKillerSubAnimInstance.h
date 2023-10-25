#pragma once

#include "CoreMinimal.h"
#include "BaseKillerAnimInstance.h"
#include "LookAtTargetKillerSubAnimInstance.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API ULookAtTargetKillerSubAnimInstance : public UBaseKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxDistanceForTargetDetection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _headSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _rootSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _preferredMinLookAtTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _distanceScoreFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _angleScoreFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _sameTargetScoreFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _yawToTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _pitchToTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasVisibleTarget;

private:
	UFUNCTION(BlueprintCallable)
	void OnChaseStarted(ADBDPlayer* target);

	UFUNCTION(BlueprintCallable)
	void OnChaseEnded(ADBDPlayer* target, float chaseTime);

public:
	ULookAtTargetKillerSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULookAtTargetKillerSubAnimInstance) { return 0; }
