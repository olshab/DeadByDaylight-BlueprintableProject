#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AITunableParameter.h"
#include "AIEnemyTargetPrediction.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UAIEnemyTargetPrediction : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter DistanceToTargetScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SpeedToTargetScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter PredictedTargetValidTime;

public:
	UAIEnemyTargetPrediction();
};

FORCEINLINE uint32 GetTypeHash(const UAIEnemyTargetPrediction) { return 0; }
