#include "SettingsPresenter.h"
#include "EOverlayTabs.h"

void USettingsPresenter::OnTabEntered(const EOverlayTabs category)
{

}

bool USettingsPresenter::IsUMGEnabled() const
{
	return false;
}

USettingsPresenter::USettingsPresenter()
{
	this->SettingsWidgetClass = NULL;
}
