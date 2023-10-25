#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "BlinkIndicatorController.generated.h"

class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkIndicatorController : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _indicatorClass;

	UPROPERTY(EditAnywhere)
	FGameplayTag _activationFlag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _indicatorMinimumVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _indicatorVelocityEasingFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _indicator;

public:
	UBlinkIndicatorController();
};

FORCEINLINE uint32 GetTypeHash(const UBlinkIndicatorController) { return 0; }
