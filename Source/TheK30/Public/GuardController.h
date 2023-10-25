#pragma once

#include "CoreMinimal.h"
#include "DBDAIBTController.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "Perception/AIPerceptionTypes.h"
#include "GuardController.generated.h"

class AActor;

UCLASS(Blueprintable)
class AGuardController : public ADBDAIBTController
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _cannotHuntWhileIdleTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _isPatrollingKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _patrolDestinationKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _patrolUseDirectPathKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _isHuntingKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _huntedSurvivorKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _huntDestinationKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _huntUseDirectPathKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _huntShouldSearchLockerKey;

private:
	UFUNCTION(BlueprintCallable)
	void OnTargetPerceptionUpdated(AActor* actor, FAIStimulus stimulus);

	UFUNCTION(BlueprintCallable)
	void OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise);

public:
	AGuardController();
};

FORCEINLINE uint32 GetTypeHash(const AGuardController) { return 0; }
