#include "CustomGameBot.h"

FCustomGameBot::FCustomGameBot()
{
	this->role = 0;
	this->diff = 0;
	this->charIdx = 0;
	this->slotIdx = 0;
	this->GUID = TEXT("");
	this->name = TEXT("");
	this->loadout = FLoadout{};
}
