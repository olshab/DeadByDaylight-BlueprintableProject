#pragma once

#include "CoreMinimal.h"
#include "EDBDCameraViewType.h"
#include "Subsystems/WorldSubsystem.h"
#include "MenuCameraSystem.generated.h"

class UMenuCameraDesignTunables;
class AMenuCameraActor;
class ACameraActor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UMenuCameraSystem : public UWorldSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMenuCameraDesignTunables* _tunables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AMenuCameraActor* _cameraTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<EDBDCameraViewType, ACameraActor*> _reservedTargets;

public:
	UMenuCameraSystem();
};

FORCEINLINE uint32 GetTypeHash(const UMenuCameraSystem) { return 0; }
