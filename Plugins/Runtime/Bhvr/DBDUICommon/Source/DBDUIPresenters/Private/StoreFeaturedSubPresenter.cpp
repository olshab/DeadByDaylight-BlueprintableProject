#include "StoreFeaturedSubPresenter.h"
#include "StoreRedirectionData.h"
#include "MysteryBoxStatus.h"

void UStoreFeaturedSubPresenter::RequestMoveToCharactersPage(const FStoreRedirectionData& storeRedirectionData)
{

}

void UStoreFeaturedSubPresenter::RequestMoveToChapterPacksPage(const FString& chapterPackId)
{

}

void UStoreFeaturedSubPresenter::OnMysteryBoxStatusLoaded(bool succeeded, const FString& campaign, const FMysteryBoxStatus& status)
{

}

void UStoreFeaturedSubPresenter::OnMysteryBoxClaimComplete(bool succeeded, const FString& campaign, const FMysteryBoxStatus& status)
{

}

void UStoreFeaturedSubPresenter::OnMysteryBoxClaimClicked()
{

}

void UStoreFeaturedSubPresenter::OnMysteryBoxClaimableStatusChanged(const FString& campaign, const FMysteryBoxStatus& status)
{

}

void UStoreFeaturedSubPresenter::OnBackendStoreDataReceived(bool success)
{

}

UStoreFeaturedSubPresenter::UStoreFeaturedSubPresenter()
{
	this->_itemsViewData = TArray<UStoreCustomizationItemViewData*>();
	this->_charactersViewData = TArray<FStoreFeaturedCharacterViewData>();
	this->_chapterPackViewData = NULL;
}
