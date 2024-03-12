#include "InteractionAnimationPreview.h"

class ADBDPlayer;

void UInteractionAnimationPreview::OnInteractionFinished(ADBDPlayer* player, bool didInteractionStart)
{

}

UInteractionAnimationPreview::UInteractionAnimationPreview()
{
	this->_interactionDefinition = NULL;
}
