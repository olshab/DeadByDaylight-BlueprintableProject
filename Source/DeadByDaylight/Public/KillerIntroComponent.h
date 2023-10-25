#pragma once

#include "CoreMinimal.h"
#include "EFPVTransitionStrategy.h"
#include "Components/ActorComponent.h"
#include "KillerIntroComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerIntroComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _percentOfCameraPanInProgressRequiredToHideKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _cameraPanInAmountToSquish;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EFPVTransitionStrategy _cameraPanInHidingStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _startKillerIntroDelay;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION(BlueprintCallable)
	void KillerCameraPanInUpdateNative(const float killerIntroCompletedPercent);

public:
	UKillerIntroComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerIntroComponent) { return 0; }
