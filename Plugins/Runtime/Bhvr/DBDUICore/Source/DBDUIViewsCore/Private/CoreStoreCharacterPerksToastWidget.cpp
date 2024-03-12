#include "CoreStoreCharacterPerksToastWidget.h"
#include "Input/Events.h"
#include "EPlayerRole.h"

class UCoreButtonWidget;
class UCoreMenuPerkWidget;
class UCharacterPerkViewData;
class UMenuPowerViewData;

void UCoreStoreCharacterPerksToastWidget::ToggleToastVisibility()
{

}

void UCoreStoreCharacterPerksToastWidget::ShowTooltip(UCoreButtonWidget* hoveredSlotWidget)
{

}

void UCoreStoreCharacterPerksToastWidget::SetPerkData(UCoreMenuPerkWidget* perkWidget, UCharacterPerkViewData* perkViewData)
{

}

void UCoreStoreCharacterPerksToastWidget::SetKillerPowerData(const UMenuPowerViewData* killerPowerViewData) const
{

}

void UCoreStoreCharacterPerksToastWidget::SetCharacterData(TArray<UCharacterPerkViewData*> characterUniquePerksViewData, EPlayerRole role)
{

}

void UCoreStoreCharacterPerksToastWidget::OpenToast_Implementation(bool isOpen)
{

}

void UCoreStoreCharacterPerksToastWidget::OnPlayerClick(const FPointerEvent& pointerEvent)
{

}

void UCoreStoreCharacterPerksToastWidget::HideTooltip(UCoreButtonWidget* unhoveredSlotWidget)
{

}

UCoreStoreCharacterPerksToastWidget::UCoreStoreCharacterPerksToastWidget()
{
	this->Title = NULL;
	this->CoreKillerPower = NULL;
	this->CorePerk_1 = NULL;
	this->CorePerk_2 = NULL;
	this->CorePerk_3 = NULL;
	this->_ignoreClickWidgets = TArray<UWidget*>();
	this->_isOpen = false;
}
