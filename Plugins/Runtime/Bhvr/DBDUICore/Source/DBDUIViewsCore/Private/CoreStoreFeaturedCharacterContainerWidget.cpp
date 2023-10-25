#include "CoreStoreFeaturedCharacterContainerWidget.h"
#include "StoreFeaturedCharacterViewData.h"

void UCoreStoreFeaturedCharacterContainerWidget::SetCharacters_Implementation(const TArray<FStoreFeaturedCharacterViewData>& viewDataArray)
{

}

void UCoreStoreFeaturedCharacterContainerWidget::OnTransitionRequested(int32 characterIndex)
{

}

UCoreStoreFeaturedCharacterContainerWidget::UCoreStoreFeaturedCharacterContainerWidget()
{
	this->CharacterTileClass = NULL;
	this->Root = NULL;
}
