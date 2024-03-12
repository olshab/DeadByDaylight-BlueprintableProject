#include "CoreFooterButtonWidget.h"

class UTexture2D;

void UCoreFooterButtonWidget::UpdateLockedFeatureVisuals_Implementation(bool isLockedFeature)
{

}

void UCoreFooterButtonWidget::SetIconTexture(UTexture2D* iconTexture)
{

}

bool UCoreFooterButtonWidget::HasValidLockedFeatureData() const
{
	return false;
}

UCoreFooterButtonWidget::UCoreFooterButtonWidget()
{
	this->_isFeatureGatingEnabled = false;
	this->_isUsingSubPanel = false;
	this->_lockedFeatureType = EDBDFeatureType::None;
	this->_buttonDisableState = EButtonDisableState::Default;
	this->_tooltipLabelText = FText::GetEmpty();
	this->_betaFeatureText = FText::GetEmpty();
	this->IconIMG = NULL;
}
