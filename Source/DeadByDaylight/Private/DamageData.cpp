#include "DamageData.h"

FDamageData::FDamageData()
{
	this->_damagedWithoutChangingRegressionState = false;
	this->_isRegressing = false;
	this->_isIntense = false;
	this->_lastDamageChangeSource = NULL;
}
