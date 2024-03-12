#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "KillInteractionDefinition.generated.h"

class ADBDPlayer;
class ASlasherPlayer;
class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillInteractionDefinition : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _disableFOVSystemDuringInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _overrideSlasherFieldOfViewDuringInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _overrideCamperFieldOfViewDuringInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _camperCopySlasherFOVCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _cameraFOVCurveName;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FString> _nonOverrideableTargetInteractions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _chargeCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isKillShownInThirdPerson;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _manuallyManageMeshHiding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _survivorAnimationLastAfterInteractionEnds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maximumDelayBeforeSurvivorDeath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationMontageDescriptor _exitMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _slasherFacingTolerance;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnMoriCancelled();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnKillAudioActivation(const bool active, ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsKillerAllowedToKillSurvivor(const ASlasherPlayer* killer, const ACamperPlayer* survivor) const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetOwningSurvivor() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FAnimationMontageDescriptor GetExitAnimationMontage() const;

	UFUNCTION(BlueprintPure)
	bool GetChargeCompleted() const;

public:
	UKillInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UKillInteractionDefinition) { return 0; }
