#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "LookAtThreatSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API ULookAtThreatSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxDistanceForThreatDetection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _headSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _rootSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _yawToThreat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _pitchToThreat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isVisibleThreat;

public:
	ULookAtThreatSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULookAtThreatSurvivorSubAnimInstance) { return 0; }
