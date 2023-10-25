#include "HangAnalytics.h"

FHangAnalytics::FHangAnalytics()
{
	this->IsHang = false;
	this->HangSourcesInfo = TEXT("");
	this->HangLogs = TEXT("");
	this->LastLoadingProgression = 0.0f;
	this->RecentFenceLogs = TEXT("");
	this->MatchId = TEXT("");
}
