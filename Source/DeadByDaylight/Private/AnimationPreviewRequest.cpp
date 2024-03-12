#include "AnimationPreviewRequest.h"

FAnimationPreviewRequest::FAnimationPreviewRequest()
{
	this->Type = EAnimationPreviewType::Mori;
	this->CharactersToUse = TArray<FAnimationPreviewCharacterRequest>();
	this->PropsToUse = TArray<FAnimationPreviewPropRequest>();
}
