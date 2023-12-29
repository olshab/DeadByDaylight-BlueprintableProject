#pragma once

#include "CoreMinimal.h"
#include "EAttackType.h"
#include "AITunableParameter.h"
#include "AIDetectedStimulus.h"
#include "Perception/AIPerceptionComponent.h"
#include "AIDisplayDebugInterface.h"
#include "EKillerAbilities.h"
#include "DBDAIPerceptionComponent.generated.h"

class UAISenseConfig;
class UObject;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDAIPerceptionComponent : public UAIPerceptionComponent, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EAttackType> RangedAttackTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EKillerAbilities> RangedKillerAbilities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EKillerAbilities> FastVaultKillerAbilities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseSimulatedCameraLocationForStimulusReceiverLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StimulusHalfFOV;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UClass*, UObject*> _objOverridingSenses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UAISenseConfig*> _originalSenseConfigs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FAIDetectedStimulus> _detectedHostileStimuli;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FAIDetectedStimulus _bestDetectedHostileStimulus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FAIDetectedStimulus _lastBestDetectedHostileStimulusInMemory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAITunableParameter _activePhaseWalkingNoiseMaxRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float ThreatDividerForNonControlledActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float HighThreatDistanceForNonControlledActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float CurrentThreatDivider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float TerrorDistanceMultiplierForNonControlledActor;

public:
	UDBDAIPerceptionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAIPerceptionComponent) { return 0; }
