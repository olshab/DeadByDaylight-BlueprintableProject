#include "DBDGameMode.h"
#include "EGameState.h"
#include "NavmeshGeneratorComponent.h"

class APlayerState;
class ADBDPlayerState;

void ADBDGameMode::SetPlayerCount(int32 playerAmount)
{

}

void ADBDGameMode::RegisterOnPlayerStateChanged(APlayerState* playerState)
{

}

void ADBDGameMode::OnPlayerGameStateChanged(ADBDPlayerState* playerState, EGameState playerGameState)
{

}

void ADBDGameMode::LevelLoaded(const FString& levelName)
{

}

bool ADBDGameMode::IsEscapeOpen() const
{
	return false;
}

void ADBDGameMode::InitializeEscapeRequirements()
{

}

void ADBDGameMode::HostGame()
{

}

bool ADBDGameMode::AreLoadoutsCreated() const
{
	return false;
}

ADBDGameMode::ADBDGameMode()
{
	this->_killerPlayerControllerClass = NULL;
	this->_survivorPlayerControllerClass = NULL;
	this->_initialPlayerStarts = TArray<APlayerStart*>();
	this->KillerCreationPositionOrder = 0;
	this->_gateBlockedStatus = NULL;
	this->_navmeshGeneratorComponent = CreateDefaultSubobject<UNavmeshGeneratorComponent>(TEXT("NavmeshGeneratorComponent"));
}
