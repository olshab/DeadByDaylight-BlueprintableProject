#include "ScreenshotExportAction.h"

FScreenshotExportAction::FScreenshotExportAction()
{
	this->ExportOnce = false;
	this->IncludeDLCFolder = false;
	this->IncludeCharacterFolder = false;
	this->Directories = TArray<FString>();
}
