#include "SplineAudioEmitterActor.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "AkComponent.h"

USplineComponent* ASplineAudioEmitterActor::GetSplineComponent()
{
	return NULL;
}

UAkComponent* ASplineAudioEmitterActor::GetEmitterComponent()
{
	return NULL;
}

ASplineAudioEmitterActor::ASplineAudioEmitterActor()
{
	this->_root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	this->_theSpline = CreateDefaultSubobject<USplineComponent>(TEXT("the Spline"));
	this->_emitter = CreateDefaultSubobject<UAkComponent>(TEXT("Emitter"));
}
