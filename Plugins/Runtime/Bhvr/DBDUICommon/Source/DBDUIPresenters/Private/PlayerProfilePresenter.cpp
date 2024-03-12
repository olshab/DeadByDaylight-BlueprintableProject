#include "PlayerProfilePresenter.h"
#include "ESpecialEventStatus.h"
#include "ECurrencyType.h"
#include "ShopWalletUpdate.h"

void UPlayerProfilePresenter::UnfocusPlayerProfile()
{

}

void UPlayerProfilePresenter::ShowPlayerProfile()
{

}

void UPlayerProfilePresenter::SetSpecialEventCurrency(const ECurrencyType specialEventCurrencyType)
{

}

void UPlayerProfilePresenter::RefreshWallet()
{

}

void UPlayerProfilePresenter::RefreshPlayerCard()
{

}

void UPlayerProfilePresenter::OnWalletUpdated(const TArray<FShopWalletUpdate>& walletUpdates)
{

}

void UPlayerProfilePresenter::OnUpdatePlayerProfileFilter(const uint8 filter)
{

}

void UPlayerProfilePresenter::OnUpdatePlayerProfileCurrencyFilter(const uint8 currencyFilter)
{

}

void UPlayerProfilePresenter::OnUpdatePlayerCardAnimationMode() const
{

}

void UPlayerProfilePresenter::OnSpecialEventStatusChanged(FName specialEventId, ESpecialEventStatus specialEventStatus)
{

}

void UPlayerProfilePresenter::OnResetPlayerProfileFilter()
{

}

void UPlayerProfilePresenter::OnResetPlayerProfileCurrencyFilter()
{

}

void UPlayerProfilePresenter::OnPlayerProfileCurrencyClicked(ECurrencyType currencyType)
{

}

void UPlayerProfilePresenter::OnPlayerProfileClicked()
{

}

void UPlayerProfilePresenter::HidePlayerProfile()
{

}

FText UPlayerProfilePresenter::GetPlayerName() const
{
	return FText::GetEmpty();
}

void UPlayerProfilePresenter::FocusPlayerProfile(const uint8 filter, const uint8 currencyFilter)
{

}

UPlayerProfilePresenter::UPlayerProfilePresenter()
{
	this->CorePlayerProfileWidgetClass = NULL;
}
