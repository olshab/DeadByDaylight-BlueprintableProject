#include "DedicatedServerGameConfig.h"

FDedicatedServerGameConfig::FDedicatedServerGameConfig()
{
	this->LatencyRetryCooldownSeconds = 0;
	this->NewContentShutdown = false;
	this->NewContentShutdownMaxMinutes = 0;
	this->NewContentShutdownMinMinutes = 0;
}
