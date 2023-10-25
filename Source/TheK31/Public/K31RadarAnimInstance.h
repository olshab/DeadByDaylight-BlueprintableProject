#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "K31RadarAnimInstance.generated.h"

class ASlasherPlayer;
class AK31Power;

UCLASS(Blueprintable, NonTransient)
class THEK31_API UK31RadarAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRecallingADrone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isActivatingADrone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAbleToPlaceDrone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isPowerOnCooldown;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK31Power* _owningK31Power;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _killer;

protected:
	UFUNCTION(BlueprintCallable)
	void ResetIsRecallingADrone();

	UFUNCTION(BlueprintCallable)
	void ResetIsActivatingADrone();

private:
	UFUNCTION()
	void OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UK31RadarAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK31RadarAnimInstance) { return 0; }
