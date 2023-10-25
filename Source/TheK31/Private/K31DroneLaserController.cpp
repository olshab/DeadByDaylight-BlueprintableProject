#include "K31DroneLaserController.h"

void UK31DroneLaserController::OnLocallyObservedChanged()
{

}

UK31DroneLaserController::UK31DroneLaserController()
{
	this->_localPlayerTracker = NULL;
	this->_locallyObservedPlayer = NULL;
	this->_laserActor = NULL;
}
