#include "SentrySettings.h"

USentrySettings::USentrySettings()
{
	this->DsnUrl = TEXT("");
	this->Environment = TEXT("Release");
	this->InitAutomatically = true;
	this->EnableVerboseLogging = true;
	this->EnableAutoCrashCapturing = true;
	this->EnableAutoLogAttachment = false;
	this->EnableStackTrace = true;
	this->EnableAutoSessionTracking = true;
	this->SessionTimeout = 30000;
	this->OverrideReleaseName = false;
	this->Release = TEXT("");
	this->UploadSymbolsAutomatically = false;
	this->ProjectName = TEXT("");
	this->OrgName = TEXT("");
	this->AuthToken = TEXT("");
	this->IncludeSources = false;
	this->CrashReporterUrl = TEXT("");
}
