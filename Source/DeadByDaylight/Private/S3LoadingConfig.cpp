#include "S3LoadingConfig.h"

FS3LoadingConfig::FS3LoadingConfig()
{
	this->GlobalTimeout = FLoadingTimeoutPerStep{};
	this->TimeoutPerSteps = TArray<FLoadingTimeoutPerStep>();
}
