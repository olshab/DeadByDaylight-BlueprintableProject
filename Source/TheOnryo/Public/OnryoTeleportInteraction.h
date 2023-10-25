#pragma once

#include "CoreMinimal.h"
#include "BasicChargeableInteraction.h"
#include "StatProperty.h"
#include "DBDTunableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "OnryoTeleportInteraction.generated.h"

class UCurveFloat;
class ASlasherPlayer;
class AOnryoTelevision;
class UConeAroundDirectionCameraStrategy;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UOnryoTeleportInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _cachedOwningKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	AOnryoTelevision* _currentTargetTelevision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AOnryoTelevision* _televisionTeleportingTo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _teleportExitAnimDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _teleportCancelledAnimDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _postTeleportSpeedDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _postTeleportSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _scorePercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _postTeleportAlternateSpeedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _offsetHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _raycastLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UConeAroundDirectionCameraStrategy> _cameraStrategyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _cameraMaximumAngleFactorCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UConeAroundDirectionCameraStrategy* _cameraStrategy;

public:
	UOnryoTeleportInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoTeleportInteraction) { return 0; }
