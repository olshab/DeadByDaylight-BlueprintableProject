#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "BlightPowerState.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, Abstract)
class UBlightPowerState : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _stateSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTunableStat _stateDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _cameraPitchRecenterTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _wallDashCollisionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _wallDashCollisionHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _wallDashCollisionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _playerCanCancelEarly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _displayCollisionIndicator;

public:
	UFUNCTION(BlueprintPure)
	float GetStateDuration() const;

public:
	UBlightPowerState();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerState) { return 0; }
