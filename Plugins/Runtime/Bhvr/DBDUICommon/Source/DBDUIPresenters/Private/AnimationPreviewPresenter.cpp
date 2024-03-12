#include "AnimationPreviewPresenter.h"
#include "InputCoreTypes.h"
#include "AnimationPreviewRequest.h"
#include "EContext.h"

class UAnimationPreviewSubsystem;

void UAnimationPreviewPresenter::OnKeyPressed(FKey key) const
{

}

void UAnimationPreviewPresenter::OnContextLeave(EContext context)
{

}

void UAnimationPreviewPresenter::OnContextEnter(EContext context)
{

}

void UAnimationPreviewPresenter::OnAnimationPreviewRequested(UAnimationPreviewSubsystem* animationPreviewSubsystem, FAnimationPreviewRequest& request)
{

}

void UAnimationPreviewPresenter::OnAnimationPreviewCompleted(UAnimationPreviewSubsystem* animationPreviewSubsystem, const FAnimationPreviewRequest& request, bool completedSuccessfully) const
{

}

bool UAnimationPreviewPresenter::IsContextEntered() const
{
	return false;
}

UAnimationPreviewPresenter::UAnimationPreviewPresenter()
{
	this->AnimationPreviewWidgetClass = NULL;
	this->ObservedContext = EContext::None;
}
