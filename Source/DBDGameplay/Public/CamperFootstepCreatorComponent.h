#pragma once

#include "CoreMinimal.h"
#include "FootstepCreatorComponent.h"
#include "StatProperty.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "CamperFootstepCreatorComponent.generated.h"

class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCamperFootstepCreatorComponent : public UFootstepCreatorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _disallowFootstepsSpawnPerkFlags;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _footstepIndicatorAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _footstepIndicatorDecalSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _footstepIndicatorDurationAdditive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _footstepIndicatorDurationMultiplictive;

protected:
	UFUNCTION(BlueprintCallable)
	void OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise);

public:
	UCamperFootstepCreatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperFootstepCreatorComponent) { return 0; }
