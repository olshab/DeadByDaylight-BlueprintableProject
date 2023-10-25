#include "StoreCharactersSubPresenter.h"
#include "EStoreCharactersMenuState.h"
#include "ECustomizationCategory.h"

void UStoreCharactersSubPresenter::OnMenuTabSelected(EStoreCharactersMenuState menuState, bool alreadySelected)
{

}

void UStoreCharactersSubPresenter::OnDisplayStandPawnLoaded(int32 characterIndex)
{

}

void UStoreCharactersSubPresenter::OnCustomizationSelected(int32 customizationIndex)
{

}

void UStoreCharactersSubPresenter::OnCustomizationCategorySelected(ECustomizationCategory category)
{

}

void UStoreCharactersSubPresenter::OnCharacterSelected(int32 characterIndex)
{

}

UStoreCharactersSubPresenter::UStoreCharactersSubPresenter()
{
	this->StoreCharactersWidgetClass = NULL;
	this->DisplayStandName = NAME_None;
	this->CameraTransitionDurationSeconds = 0.000000;
	this->_availableCharacters = TArray<UStoreCharacterItemViewData*>();
	this->_selectedCharacter = NULL;
}
