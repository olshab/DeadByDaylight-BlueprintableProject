#pragma once

#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SnappingData.h"
#include "MontagePlaybackDefinition.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "MontageStopDefinition.h"
#include "MaxSpeedValidate.h"
#include "UObject/NoExportTypes.h"
#include "EMovementCurveType.h"
#include "YawAndPitchRotator_NetQuantize32.h"
#include "DBDCharacterMovementComponent.generated.h"

class UBaseCharacterRotationStrategy;
class UCurveFloat;
class UBaseCharacterVelocityAdditiveStrategy;
class UBaseInputAccelerationConstraintStrategy;
class AActor;
class UAnimMontage;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProjectedWallSlidingFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RandomInputFrontMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RandomInputSideMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RandomInputBackMultiplier;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _forceUseDropStaggerFix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UCurveFloat*> _maxSpeedMultiplierCurvesToRemoveOnTheServer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBaseCharacterVelocityAdditiveStrategy* _velocityAdditiveStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBaseInputAccelerationConstraintStrategy* _inputAccelerationConstraintStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBaseCharacterRotationStrategy* _rotationStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _lookAtTarget;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_StopMontage(float timestamp, const FMontageStopDefinition montageStopDefinition);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_StartSnapping(float timestamp, const FSnappingData data, int32 snappingCallCount);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_ShowAllIncreaseMovementSpeedModifier(const float clientMaxSpeedMultiplierScalar, const float clientcomputedMaxSpeedMultiplierScalar, const TArray<FMaxSpeedValidate>& clientModifiers);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetStopSnapping(float timestamp, const bool snapToFinalDestination);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetMaxSpeedOverride(float timestamp, float value, bool isSet, const int32 maxSpeedOverrideCallCount);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetMaxSpeedMultiplierScalar(float timestamp, float value);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetMaxAcceleration(float timestamp, float value);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetIgnorePawnCollisionOverride(float timestamp, bool isIgnoringPawnCollision, int32 ignoringCollisionCallCount);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetAdditiveMaxSpeedScalar(float timestamp, float value);

protected:
	UFUNCTION(Server, Reliable)
	void Server_ReplicateControlRotation(uint8 clientRoll, uint32 view);

private:
	UFUNCTION(Server, Reliable)
	void Server_RemoveMaxSpeedMovementCurve(float timestamp, const uint32 curveNetId, const EMovementCurveType movementCurveType);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_PlayMontage(float timestamp, const FMontagePlaybackDefinition montagePlaybackDefinition);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_MovementTimeSync(uint64 clientTimeSync);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_Launch(float timestamp, FVector launchVelocity, int32 launchCallCount);

	UFUNCTION(Server, Reliable)
	void Server_AddMaxSpeedMovementCurve(float timestamp, const uint32 curveNetId, float duration, float startOffset, const EMovementCurveType movementCurveType);

	UFUNCTION(BlueprintCallable)
	void OnPreMontageStop(const FMontageStopDefinition montageDefinition, const UAnimMontage* montage);

	UFUNCTION(BlueprintCallable)
	void OnMontageStarted(const FMontagePlaybackDefinition& montageDefinition, const UAnimMontage* montage);

protected:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_TeleportTo(FVector_NetQuantize100 location, FYawAndPitchRotator_NetQuantize32 rotation);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_Stop();

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_RequestAllIncreaseMovementSpeed();

protected:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_PreventMovement(const bool value);

public:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_Cheat_SetMaxSpeedMultiplier(const float maxSpeedMultiplier);

public:
	UDBDCharacterMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDCharacterMovementComponent) { return 0; }
