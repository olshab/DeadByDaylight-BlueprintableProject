#include "BhvrAssetViewCamera.h"
#include "GameFramework/SpringArmComponent.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraComponent.h"

void ABhvrAssetViewCamera::SetUseDepthOfField(bool bNewValue)
{

}

void ABhvrAssetViewCamera::SetUseAutoFocus(bool bNewValue)
{

}

void ABhvrAssetViewCamera::SetShowAutoFocusTarget(bool bNewValue)
{

}

void ABhvrAssetViewCamera::SetRollAngle(float NewRollAngle)
{

}

void ABhvrAssetViewCamera::SetFieldOfView(float NewFieldOfView)
{

}

void ABhvrAssetViewCamera::SetExposureBias(float NewExposureBias)
{

}

void ABhvrAssetViewCamera::SetBlurAmount(float NewBlurAmount)
{

}

void ABhvrAssetViewCamera::SetAutoFocusOffset(FVector NewFocusTargetOffsetXY)
{

}

void ABhvrAssetViewCamera::SetAspectRatio(float NewAspectRatio)
{

}

void ABhvrAssetViewCamera::PickPivotWithCursor()
{

}

void ABhvrAssetViewCamera::PickFocusWithCursor()
{

}

float ABhvrAssetViewCamera::GetRollAngle() const
{
	return 0.0f;
}

float ABhvrAssetViewCamera::GetFieldOfView() const
{
	return 0.0f;
}

float ABhvrAssetViewCamera::GetExposureBias() const
{
	return 0.0f;
}

float ABhvrAssetViewCamera::GetAspectRatio() const
{
	return 0.0f;
}

ABhvrAssetViewCamera::ABhvrAssetViewCamera()
{
	this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	this->ZoomFactor = 0.000000;
	this->PanSpeed = 0.000000;
	this->RotationSensitivity = 0.000000;
	this->MinVerticalRotation = 0.000000;
	this->MaxVerticalRotation = 0.000000;
	this->ZoomSpeed = 0.000000;
	this->DefaultZoomDistance = 0.000000;
	this->MinZoomDistance = 0.000000;
	this->MaxZoomDistance = 0.000000;
	this->MinFocalDistance = 0.000000;
	this->MaxFocalDistance = 0.000000;
	this->AspectRatio = 0.000000;
	this->ExposureBias = 0.000000;
	this->FieldOfView = 0.000000;
	this->RollAngle = 0.000000;
	this->bUseDepthOfField = false;
	this->BlurAmount = 0.000000;
	this->bUseAutoFocus = true;
	this->bShowAutoFocusTarget = false;
}
