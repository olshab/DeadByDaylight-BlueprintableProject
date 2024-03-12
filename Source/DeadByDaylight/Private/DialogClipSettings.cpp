#include "DialogClipSettings.h"

FDialogClipSettings::FDialogClipSettings()
{
	this->Clip = NULL;
	this->ConditionContainer = FDialogHandlerConditionContainer{};
	this->Priority = 0;
	this->Weight = 0;
	this->IsOnlyPlayingOnce = false;
	this->HasSubtitles = false;
}
