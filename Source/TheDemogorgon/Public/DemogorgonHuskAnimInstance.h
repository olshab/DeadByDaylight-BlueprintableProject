#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DemogorgonHuskAnimInstance.generated.h"

class ASlasherPlayer;
class APawn;
class UDemogorgonPortalPlacerStateComponent;
class UAnimSequence;
class UAnimMontage;

UCLASS(Blueprintable, NonTransient)
class UDemogorgonHuskAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	APawn* _owningPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _teleportDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _teleportExitPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isSlowerExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isTeleporting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _huskPortalSlowerExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _huskPortalExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* _demogorgonPortalExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* _demogorgonPortalEntry;

private:
	UPROPERTY(EditAnywhere, Transient, Export)
	TWeakObjectPtr<UDemogorgonPortalPlacerStateComponent> _demogorgonPortalPlacerState;

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

public:
	UDemogorgonHuskAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonHuskAnimInstance) { return 0; }
