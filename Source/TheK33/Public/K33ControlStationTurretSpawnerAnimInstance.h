#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "K33ControlStationTurretSpawnerAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class UK33ControlStationTurretSpawnerAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBoxOpening;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBoxOpened;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _boxOpeningPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _spawnTurretAnimSequence;

public:
	UK33ControlStationTurretSpawnerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK33ControlStationTurretSpawnerAnimInstance) { return 0; }
