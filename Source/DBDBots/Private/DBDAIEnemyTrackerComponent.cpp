#include "DBDAIEnemyTrackerComponent.h"

UDBDAIEnemyTrackerComponent::UDBDAIEnemyTrackerComponent()
{
	this->EnemyTracker = NULL;
	this->UpdateInterval = 0.100000;
	this->_trackedEnemiesData = TMap<TWeakObjectPtr<ACharacter>, FAITrackedEnemyData>();
}
