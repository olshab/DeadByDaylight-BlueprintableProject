#pragma once

#include "CoreMinimal.h"
#include "KillerProjectileLauncher.h"
#include "DBDTunableRowHandle.h"
#include "HarpoonLauncher.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UHarpoonLauncher : public UKillerProjectileLauncher
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _launchSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _launchDistanceFromCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _launchZOffset;

public:
	UHarpoonLauncher();
};

FORCEINLINE uint32 GetTypeHash(const UHarpoonLauncher) { return 0; }
