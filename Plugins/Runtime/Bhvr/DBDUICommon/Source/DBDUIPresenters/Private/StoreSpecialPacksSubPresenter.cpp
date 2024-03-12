#include "StoreSpecialPacksSubPresenter.h"

void UStoreSpecialPacksSubPresenter::OnSpecialPackClicked(const FString& packId)
{

}

void UStoreSpecialPacksSubPresenter::OnPackBuyClicked(const FString& packId)
{

}

void UStoreSpecialPacksSubPresenter::OnHeritagePackBuyClicked(const FString& packId)
{

}

void UStoreSpecialPacksSubPresenter::OnCustomizationClicked(const FString& packId, const FName& customizationId)
{

}

void UStoreSpecialPacksSubPresenter::OnCharacterClicked(const FString& packId, const int32 characterIndex)
{

}

void UStoreSpecialPacksSubPresenter::OnChapterPackClicked(const FString& packId)
{

}

void UStoreSpecialPacksSubPresenter::OnArchivePassClicked(const FString& packId, const FName& archiveId)
{

}

UStoreSpecialPacksSubPresenter::UStoreSpecialPacksSubPresenter()
{
	this->_specialPacks = TArray<UStoreSpecialPackViewData*>();
	this->_chapterPacks = TArray<UStoreChapterPackViewData*>();
	this->_heritagePacks = TArray<FStoreHeritagePackViewData>();
}
