#include "CharacterChaseVisualComponent.h"

void UCharacterChaseVisualComponent::OnAllChaseEnd()
{

}

UCharacterChaseVisualComponent::UCharacterChaseVisualComponent()
{
	this->_vignetteMeshComp = NULL;
	this->_fovModifyFactor = 100.000000;
}
