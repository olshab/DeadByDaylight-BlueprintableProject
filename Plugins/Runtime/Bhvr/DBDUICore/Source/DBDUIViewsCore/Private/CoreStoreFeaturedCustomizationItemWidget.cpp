#include "CoreStoreFeaturedCustomizationItemWidget.h"

class UCorePriceTagWidget;
class UUITweenInstance;

void UCoreStoreFeaturedCustomizationItemWidget::UpdateSize(UUITweenInstance* tween)
{

}

void UCoreStoreFeaturedCustomizationItemWidget::UpdatePosition(UUITweenInstance* tween)
{

}

UCorePriceTagWidget* UCoreStoreFeaturedCustomizationItemWidget::CreatePriceTagWidget()
{
	return NULL;
}

void UCoreStoreFeaturedCustomizationItemWidget::ClearPriceTagWidgets()
{

}

UCoreStoreFeaturedCustomizationItemWidget::UCoreStoreFeaturedCustomizationItemWidget()
{
	this->_priceTagWidgetClass = NULL;
	this->_preConstructedPriceTagCount = 1;
	this->PriceTagsContainer = NULL;
	this->_priceTagsList = NULL;
	this->_sizeTween = NULL;
	this->_positionTween = NULL;
}
