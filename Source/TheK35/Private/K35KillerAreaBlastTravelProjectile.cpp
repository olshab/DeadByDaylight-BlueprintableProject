#include "K35KillerAreaBlastTravelProjectile.h"
#include "Components/SphereComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "KillerProjectileDodgeComponent.h"

class ASlasherPlayer;
class UPrimitiveComponent;
class AActor;

void AK35KillerAreaBlastTravelProjectile::OnSurvivorHitDetected(UPrimitiveComponent* component, const FHitResult& hit)
{

}

void AK35KillerAreaBlastTravelProjectile::OnKillerSet(ASlasherPlayer* killer)
{

}

void AK35KillerAreaBlastTravelProjectile::OnIntroCompleted()
{

}

void AK35KillerAreaBlastTravelProjectile::Multicast_OnProjectileReachedEnd_Implementation(const FVector endLocation)
{

}

void AK35KillerAreaBlastTravelProjectile::Multicast_BreakWallOrDownedPallet_Implementation(AActor* wallOrPallet)
{

}

void AK35KillerAreaBlastTravelProjectile::Authority_OnProjectileTimeout()
{

}

void AK35KillerAreaBlastTravelProjectile::Authority_OnEnvironmentCollisionComponentOverlapBegin(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool isFromSweep, const FHitResult& sweepResult)
{

}

void AK35KillerAreaBlastTravelProjectile::Authority_OnEnvironmentCollisionComponentHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit)
{

}

AK35KillerAreaBlastTravelProjectile::AK35KillerAreaBlastTravelProjectile()
{
	this->_environmentCollision = CreateDefaultSubobject<USphereComponent>(TEXT("EnvironmentCollision"));
	this->_playerCollision = CreateDefaultSubobject<USphereComponent>(TEXT("PlayerCollision"));
	this->_killerProjectileDodge = CreateDefaultSubobject<UKillerProjectileDodgeComponent>(TEXT("KillerProjectileDodge"));
	this->_hinderedOnPassThroughStatusEffectClass = NULL;
	this->_isProjectileActive = false;
}
