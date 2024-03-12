#include "AnimationPreviewCharacterRequest.h"

FAnimationPreviewCharacterRequest::FAnimationPreviewCharacterRequest()
{
	this->Role = EPlayerRole::VE_None;
	this->CharacterClass = NULL;
	this->Customization = FCharacterCustomization{};
	this->SpawnTransform = FTransform{};
}
