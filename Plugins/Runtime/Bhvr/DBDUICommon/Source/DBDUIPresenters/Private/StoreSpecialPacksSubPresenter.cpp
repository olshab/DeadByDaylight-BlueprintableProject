#include "StoreSpecialPacksSubPresenter.h"

void UStoreSpecialPacksSubPresenter::OnSpecialPackBuyClicked(const FString& packId)
{

}

UStoreSpecialPacksSubPresenter::UStoreSpecialPacksSubPresenter()
{
	this->StoreBundlesWidgetClass = NULL;
	this->_specialPacks = TArray<UStoreSpecialPackViewData*>();
	this->_chapterPacks = TArray<UStoreChapterPackViewData*>();
}
