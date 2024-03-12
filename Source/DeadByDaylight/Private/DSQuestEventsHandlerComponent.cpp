#include "DSQuestEventsHandlerComponent.h"

UDSQuestEventsHandlerComponent::UDSQuestEventsHandlerComponent()
{
	this->_evaluatorList = TArray<UQuestEventEvaluatorBase*>();
}
