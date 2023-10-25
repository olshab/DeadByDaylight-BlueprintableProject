#include "LoadingTimeoutPerStep.h"

FLoadingTimeoutPerStep::FLoadingTimeoutPerStep()
{
	this->StepName = TEXT("");
	this->ExpectedTimeout = 0.0f;
	this->HardCapTimeout = 0.0f;
	this->TimeCapWithoutProgress = 0.0f;
}
