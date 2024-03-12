#include "PathBuilder_TowardActor.h"

UPathBuilder_TowardActor::UPathBuilder_TowardActor()
{
	this->FindClass = NULL;
	this->UseClosestEscapePointIfAvailable = false;
	this->OpenDoorOffset = 500.000000;
	this->MinimumDistance = 0.000000;
	this->MaximumDistance = 128000.000000;
	this->SearchForClosestActor = true;
	this->FilterClass = NULL;
}
