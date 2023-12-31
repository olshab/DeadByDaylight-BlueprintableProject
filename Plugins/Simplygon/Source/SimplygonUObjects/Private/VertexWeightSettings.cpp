#include "VertexWeightSettings.h"

FVertexWeightSettings::FVertexWeightSettings()
{
	this->UseVertexWeightsInReducer = false;
	this->UseVertexWeightsInTexcoordGenerator = false;
	this->WeightsFromColorLevel = 0;
	this->WeightsFromColorName = TEXT("");
	this->WeightsFromColorComponent = EWeightsFromColorComponent::Red;
	this->WeightsFromColorMultiplier = 0.0f;
	this->WeightsFromColorMode = EWeightsFromColorMode::Standard;
}
