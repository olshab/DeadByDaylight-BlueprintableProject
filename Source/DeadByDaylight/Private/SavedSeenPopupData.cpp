#include "SavedSeenPopupData.h"

FSavedSeenPopupData::FSavedSeenPopupData()
{
	this->LastSeenDate = FDateTime{};
	this->LastSeenCumulativeSession = 0;
	this->TimesSeen = 0;
}
