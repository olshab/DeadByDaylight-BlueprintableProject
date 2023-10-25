#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SocketOrBoneCache.h"
#include "ELeanState.h"
#include "AutomaticLeanComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAutomaticLeanComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPotentialLeanStateChanged, ELeanState, leanState);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLeanStateChanged, ELeanState, leanState);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCanInitiateLeanChanged, bool, canInitiate);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLeanStateChanged OnLeanStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPotentialLeanStateChanged OnPotentialLeanStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCanInitiateLeanChanged OnCanInitiateLeanChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSocketOrBoneCache _cameraIdleLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSocketOrBoneCache _cameraLeftLeanLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSocketOrBoneCache _cameraRightLeanLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSocketOrBoneCache _cameraCrouchLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSocketOrBoneCache _cameraCrouchLeftLeanLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSocketOrBoneCache _cameraCrouchRightLeanLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _middleSphereTraceLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sideSphereTraceLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sphereTraceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _standingTraceHeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _crouchingTraceHeightOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sideTraceOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxCameraDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxCameraAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _debugMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_LeanState, Transient, meta=(AllowPrivateAccess=true))
	ELeanState _leanState;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetLeanState(ELeanState leanState);

	UFUNCTION(BlueprintCallable)
	void OnRep_LeanState();

public:
	UFUNCTION(BlueprintCallable)
	void Local_Unlean();

	UFUNCTION(BlueprintCallable)
	void Local_Lean();

	UFUNCTION(BlueprintPure)
	bool IsLeaning() const;

	UFUNCTION(BlueprintPure)
	ELeanState GetPotentialLeanState() const;

	UFUNCTION(BlueprintPure)
	ELeanState GetLeanState() const;

	UFUNCTION(BlueprintPure)
	float GetAvailableDistanceInFrontOfCamera() const;

	UFUNCTION(BlueprintPure)
	bool CanInitiateLean() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UAutomaticLeanComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAutomaticLeanComponent) { return 0; }
