#include "BloodReceptacle.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/EngineTypes.h"
#include "BloodReceptacleOutlineUpdateStrategy.h"

class UPrimitiveComponent;
class AActor;

void ABloodReceptacle::Multicast_OnChargeCollected_Implementation()
{

}

void ABloodReceptacle::Authority_OnEnterCollectionZone(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

ABloodReceptacle::ABloodReceptacle()
{
	this->_bloodReceptacleStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BloodReceptacleStaticMesh"));
	this->_bloodReceptacleCollectionZone = CreateDefaultSubobject<USphereComponent>(TEXT("BloodReceptacleCollectionZone"));
	this->_outlineUpdateStrategy = CreateDefaultSubobject<UBloodReceptacleOutlineUpdateStrategy>(TEXT("BloodReceptacleUpdateStrategy"));
}
