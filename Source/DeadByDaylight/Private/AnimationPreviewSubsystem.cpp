#include "AnimationPreviewSubsystem.h"

class UAnimationPreview;

void UAnimationPreviewSubsystem::OnAnimationPreviewEnd(UAnimationPreview* preview, bool completedSuccessfully)
{

}

bool UAnimationPreviewSubsystem::IsPreviewingAnimation() const
{
	return false;
}

UAnimationPreviewSubsystem::UAnimationPreviewSubsystem()
{
	this->_activePreview = NULL;
}
