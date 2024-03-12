#include "SaveTheBestForLast.h"

float USaveTheBestForLast::GetCooldownPerToken() const
{
	return 0.0f;
}

USaveTheBestForLast::USaveTheBestForLast()
{
	this->TokensLostOnHit = 2;
	this->_maxTokens = 0;
	this->_cooldownPerToken = 0.050000;
}
