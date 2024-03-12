#include "ItemCharacterKillswitchData.h"

FItemCharacterKillswitchData::FItemCharacterKillswitchData()
{
	this->CharacterFallback = FCharacterFallbackData{};
	this->FallbacksByGameType = TMap<FString, FCharacterFallbackData>();
	this->DisabledItems = TMap<FString, FDisabledItemData>();
	this->DisabledItems_IsSet = false;
}
