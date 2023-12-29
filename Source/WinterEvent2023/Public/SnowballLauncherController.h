#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "SnowballLauncherController.generated.h"

class USnowballProvider;
class USnowballProjectileLauncher;

UCLASS(Blueprintable)
class WINTEREVENT2023_API ASnowballLauncherController : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USnowballProvider* _snowballProvider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USnowballProjectileLauncher* _snowballLauncher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _snowballCarryLimit;

public:
	ASnowballLauncherController();
};

FORCEINLINE uint32 GetTypeHash(const ASnowballLauncherController) { return 0; }
