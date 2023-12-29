#include "RemoteContentCacheEntry.h"

FRemoteContentCacheEntry::FRemoteContentCacheEntry()
{
	this->Schema = TEXT("");
	this->Uri = TEXT("");
	this->ContentVersion = TEXT("");
	this->PackagedObjectPath = FSoftObjectPath{};
	this->_isPackaged = false;
}
