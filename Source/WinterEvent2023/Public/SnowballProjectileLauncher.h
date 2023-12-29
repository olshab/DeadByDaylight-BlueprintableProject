#pragma once

#include "CoreMinimal.h"
#include "BaseProjectileLauncher.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "SnowballProjectileLauncher.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class WINTEREVENT2023_API USnowballProjectileLauncher : public UBaseProjectileLauncher
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _launchSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FRotator _angleOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _snowballPitchCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _snowballLaunchPitchMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimAngleOffsetPitchSurvivorFemale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimAngleOffsetPitchSurvivorMale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _aimAngleOffsetPitchKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _survivorLaunchPositionOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _killerLaunchPositionOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _snowballLaunchPitchMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _characterBoneNameCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _characterBoneNameSlasher;

public:
	USnowballProjectileLauncher();
};

FORCEINLINE uint32 GetTypeHash(const USnowballProjectileLauncher) { return 0; }
