#include "CoreStoreCharactersFilterWidget.h"
#include "EItemFilterOption.h"

class UCoreButtonWidget;

void UCoreStoreCharactersFilterWidget::OnFilterOptionCheckBoxToggled(bool isToggled, EItemFilterOption itemFilterOption)
{

}

void UCoreStoreCharactersFilterWidget::OnClearFiltersClicked(UCoreButtonWidget* buttonTarget)
{

}

UCoreStoreCharactersFilterWidget::UCoreStoreCharactersFilterWidget()
{
	this->ClearFiltersButton = NULL;
	this->CheckBoxesContainer = NULL;
	this->FiltersCheckBoxArray = TArray<UCoreFilterButtonWidget*>();
}
