#include "S3AnalyticsConfig.h"

FS3AnalyticsConfig::FS3AnalyticsConfig()
{
	this->GameInitVerbose = false;
	this->GameConsoleLogMinimumVerbosity = TEXT("");
	this->MaxFramesUntilSend = 0;
	this->MaxTrackedRecurrences = 0;
	this->ScoreTypeWhitelist = TArray<FString>();
	this->ScoreTypeWhitelist_IsSet = false;
	this->DetailedScoreTypeWhitelist = TArray<FString>();
	this->DetailedScoreTypeWhitelist_IsSet = false;
}
