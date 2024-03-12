#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "BhvrAssetViewCamera.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS(Blueprintable)
class BHVRASSETVIEWER_API ABhvrAssetViewCamera : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector PanFactorXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector RotationFactorXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ZoomFactor;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float PanSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float RotationSensitivity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MinVerticalRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MaxVerticalRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float ZoomSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float DefaultZoomDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MinZoomDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MaxZoomDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MinFocalDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MaxFocalDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float AspectRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float ExposureBias;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float FieldOfView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float RollAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bUseDepthOfField;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float BlurAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bUseAutoFocus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector AutoFocusOffsetXY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bShowAutoFocusTarget;

public:
	UFUNCTION(BlueprintCallable)
	void SetUseDepthOfField(bool bNewValue);

	UFUNCTION(BlueprintCallable)
	void SetUseAutoFocus(bool bNewValue);

	UFUNCTION(BlueprintCallable)
	void SetShowAutoFocusTarget(bool bNewValue);

	UFUNCTION(BlueprintCallable)
	void SetRollAngle(float NewRollAngle);

	UFUNCTION(BlueprintCallable)
	void SetFieldOfView(float NewFieldOfView);

	UFUNCTION(BlueprintCallable)
	void SetExposureBias(float NewExposureBias);

	UFUNCTION(BlueprintCallable)
	void SetBlurAmount(float NewBlurAmount);

	UFUNCTION(BlueprintCallable)
	void SetAutoFocusOffset(FVector NewFocusTargetOffsetXY);

	UFUNCTION(BlueprintCallable)
	void SetAspectRatio(float NewAspectRatio);

	UFUNCTION(BlueprintCallable)
	void PickPivotWithCursor();

	UFUNCTION(BlueprintCallable)
	void PickFocusWithCursor();

	UFUNCTION(BlueprintPure)
	float GetRollAngle() const;

	UFUNCTION(BlueprintPure)
	float GetFieldOfView() const;

	UFUNCTION(BlueprintPure)
	float GetExposureBias() const;

	UFUNCTION(BlueprintPure)
	float GetAspectRatio() const;

public:
	ABhvrAssetViewCamera();
};

FORCEINLINE uint32 GetTypeHash(const ABhvrAssetViewCamera) { return 0; }
