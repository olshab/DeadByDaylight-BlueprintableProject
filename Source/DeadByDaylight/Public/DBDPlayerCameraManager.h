#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "UObject/ScriptInterface.h"
#include "DBDPlayerCameraManager.generated.h"

class IViewRotationStrategy;

UCLASS(Blueprintable, NonTransient)
class DEADBYDAYLIGHT_API ADBDPlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NormalFOV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetingFOV;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IViewRotationStrategy> _viewRotationStrategy;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StartFadeOutTimeline(float duration);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StartFadeInTimeline(float duration);

public:
	ADBDPlayerCameraManager();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayerCameraManager) { return 0; }
