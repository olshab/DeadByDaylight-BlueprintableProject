#include "PlatformDlcData.h"

FPlatformDlcData::FPlatformDlcData()
{
	this->ID = TEXT("");
	this->UnlockDescription = FText::GetEmpty();
	this->Description = TEXT("");
	this->UISortOrder = 0;
	this->HeritageID = TEXT("");
	this->DlcIdSteam = TEXT("");
	this->DlcIdEpic = TEXT("");
	this->DlcIdPS4 = TEXT("");
	this->DlcId_XB1_XSX_GDK = TEXT("");
	this->DlcIdSwitch = TEXT("");
	this->DlcIdGRDK = TEXT("");
	this->DlcIdPS5 = TEXT("");
	this->DlcIdStadia = TEXT("");
}
