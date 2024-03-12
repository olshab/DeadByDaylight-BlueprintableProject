#include "DBDChildActorComponent.h"

UDBDChildActorComponent::UDBDChildActorComponent()
{
	this->_childActorToSpawn = NULL;
	this->_socketNameToAttach = NAME_None;
	this->_attachmentLocationRule = EAttachmentRule::KeepRelative;
	this->_attachmentRotationRule = EAttachmentRule::KeepRelative;
	this->_attachmentScaleRule = EAttachmentRule::KeepRelative;
	this->_weldSimulatedBodies = false;
	this->_childActor = NULL;
}
