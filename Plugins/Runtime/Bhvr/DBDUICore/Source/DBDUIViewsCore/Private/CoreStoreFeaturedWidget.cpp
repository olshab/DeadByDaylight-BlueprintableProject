#include "CoreStoreFeaturedWidget.h"

UCoreStoreFeaturedWidget::UCoreStoreFeaturedWidget()
{
	this->_featuredItems = TArray<UStoreCustomizationItemViewData*>();
	this->CustomizationItemContainer = NULL;
	this->CharacterContainer = NULL;
	this->MysteryBox = NULL;
	this->FeaturedChapterPack = NULL;
}
