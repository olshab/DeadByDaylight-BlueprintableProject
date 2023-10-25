#include "K33TunnelBlockSpawnData.h"

FK33TunnelBlockSpawnData::FK33TunnelBlockSpawnData()
{
	this->_worldRotation = FRotator{};
	this->_blockType = EK33TunnelBlockType::None;
	this->_gridInfo = FK33TunnelGridCellData{};
}
