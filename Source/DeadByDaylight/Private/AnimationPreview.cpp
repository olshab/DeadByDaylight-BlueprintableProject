#include "AnimationPreview.h"

void UAnimationPreview::OnRequiredClassesLoaded()
{

}

void UAnimationPreview::OnFadeOutForCompletionComplete(bool succeeded)
{

}

void UAnimationPreview::OnFadeInComplete()
{

}

void UAnimationPreview::OnAnimationStartFadeOutComplete()
{

}

UAnimationPreview::UAnimationPreview()
{
	this->Characters = TArray<FAnimationPreviewCharacter>();
	this->Props = TArray<FAnimationPreviewProp>();
}
