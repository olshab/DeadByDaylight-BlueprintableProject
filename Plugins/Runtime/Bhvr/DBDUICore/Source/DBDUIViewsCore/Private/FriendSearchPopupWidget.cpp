#include "FriendSearchPopupWidget.h"

class UCoreButtonWidget;

void UFriendSearchPopupWidget::OnFriendClicked(UCoreButtonWidget* buttonTarget)
{

}

UFriendSearchPopupWidget::UFriendSearchPopupWidget()
{
	this->FriendSearchWidget = NULL;
	this->FriendSearchScrollBox = NULL;
	this->FriendItemWidgetClass = NULL;
	this->_friendsMap = TMap<FString, UFriendItemWidget*>();
	this->_searchBar = NULL;
	this->SearchBar = NULL;
}
