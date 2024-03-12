#include "K35AreaBlast.h"
#include "Components/SceneComponent.h"
#include "ECamperDamageState.h"
#include "Components/SphereComponent.h"
#include "UObject/NoExportTypes.h"

class ACamperPlayer;

void AK35AreaBlast::OnIntroCompleted()
{

}

void AK35AreaBlast::Multicast_SurvivorDamagedByAreaBlast_Implementation(ACamperPlayer* survivor, ECamperDamageState targetHealthState)
{

}

void AK35AreaBlast::Multicast_SurvivorAfflictedWithKillerEffectByAreaBlast_Implementation(ACamperPlayer* survivor, ECamperDamageState currentHealthState)
{

}

void AK35AreaBlast::Multicast_Spawn_Implementation(const FVector& spawnLocation)
{

}

AK35AreaBlast::AK35AreaBlast()
{
	this->_stateDurationMap = TMap<EK35AreaBlastState, FDBDTunableRowHandle>();
	this->_nextStateMap = TMap<EK35AreaBlastState, EK35AreaBlastState>();
	this->_growCurve = NULL;
	this->_shrinkCurve = NULL;
	this->_playerCollision = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerCollision"));
	this->_offsetComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Offset"));
	this->_affectedSurvivors = TArray<ACamperPlayer*>();
}
