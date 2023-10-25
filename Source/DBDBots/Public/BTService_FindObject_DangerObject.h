#pragma once

#include "CoreMinimal.h"
#include "BTService_FindObject.h"
#include "DangerObjectData.h"
#include "AITunableParameter.h"
#include "ESurvivorFleePathStrategy.h"
#include "BTService_FindObject_DangerObject.generated.h"

class UDBDDangerPredictionComponent;

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_FindObject_DangerObject : public UBTService_FindObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool GetDangerObjectsFromHostileStimulus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESurvivorFleePathStrategy FleePathStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HideFromLosCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter NotSensedReactionDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SensedReactionDelay;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UDBDDangerPredictionComponent*, FDangerObjectData> _lastDangerObjectsMap;

public:
	UBTService_FindObject_DangerObject();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindObject_DangerObject) { return 0; }
