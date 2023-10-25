#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseSurvivorAnimInstance.h"
#include "EGuidedState.h"
#include "EIntroState.h"
#include "EInteractionAnimation.h"
#include "SurvivorAnimInstance.generated.h"

class UAnimMontage;
class ACamperPlayer;
class UAnimCompositeBase;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API USurvivorAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ACamperPlayer* CamperPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSacrificeStruggling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* MontageMadnessTierUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAnimCompositeBase*> ArrayCarryAttackMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EIntroState _introState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isFrightScreaming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBeingCarried;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBeingPutOnHook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EGuidedState GuidedAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float MaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsInsideCloset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float IsPlayingMadnessTierUpWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBeingKilled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBeingHealed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsCarryAttackSucess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsUsingAimItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHoldingAimItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool AllowLookAt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float DropStaggerTimeLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float RightArmIKAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FTransform RightHandIKTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool Strafe;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsInteracting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool Injured;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EInteractionAnimation InteractionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EInteractionAnimation PreviousInteractionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSlasherInFPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float CarriedAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHoldingHandleItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHoldingSmallItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHoldingFirecracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHoldingFlashbang;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHoldingVaccine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHoldingAnyItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHoldingLamentConfiguration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHoldingFragileObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHoldingSprayObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHoldingVhs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsHoldingWormholeFatherKeyCard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsArmOverrideDisabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool InAir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _walkAnimSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float Direction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float Pitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float Yaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector RightFootEffectorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector LeftFootEffectorLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool Idle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasAnyMontagePlaying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName CurrentlyPlayerMontageId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBeingCarriedByTheSpirit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBeingCarriedByTheNightmare;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBeingCarriedByThePig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBeingCarriedByTheHag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBeingCarriedByTheLegion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBeingCarriedByTheGhostFace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsPlayingWakeUpOther;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsPlayingFreddyMori;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasLinkInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isMale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animMontageLeaderForwardVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _animMontageLeaderLateralVelocity;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetAudioRummageAkEvent(FName distance);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInfectiousFrightScream();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AddAudioRepairRateRadius(int32 distance);

public:
	USurvivorAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorAnimInstance) { return 0; }
