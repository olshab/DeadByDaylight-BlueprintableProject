#include "K35KillerTeleportPoint.h"
#include "UObject/NoExportTypes.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DBDOutlineComponent.h"
#include "Net/UnrealNetwork.h"
#include "Engine/EngineTypes.h"
#include "EK35KillerTeleportPointState.h"
#include "K35KillerTeleportPointOutlineStrategy.h"
#include "PrimitivesRegistererComponent.h"
#include "ClippableProviderComponent.h"
#include "DBDNavModifierComponent.h"
#include "Components/CapsuleComponent.h"
#include "K35KillerTeleportPointDangerPredictionComponent.h"
#include "GameplayTagContainerComponent.h"

class ADBDPlayer;
class ASlasherPlayer;
class UPrimitiveComponent;
class AActor;

void AK35KillerTeleportPoint::SetHuskVisibilityChecked(const bool isVisible)
{

}

void AK35KillerTeleportPoint::OnRep_KillerTeleportPointState()
{

}

void AK35KillerTeleportPoint::OnRep_KillerTeleportPointInteractable()
{

}

void AK35KillerTeleportPoint::OnRep_IsAcquiredFromPool(bool oldIsAcquiredFromPool)
{

}

void AK35KillerTeleportPoint::OnPlayerOverlapEnd(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex)
{

}

void AK35KillerTeleportPoint::OnPlayerOverlapBegin(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void AK35KillerTeleportPoint::OnKillerTeleportLingerTimeComplete()
{

}

void AK35KillerTeleportPoint::OnKillerSet(ASlasherPlayer* killer)
{

}

void AK35KillerTeleportPoint::OnKillerCustomizationMeshChanged()
{

}

void AK35KillerTeleportPoint::OnIntroCompleted()
{

}

void AK35KillerTeleportPoint::OnDecoySpawn(const FVector& location)
{

}

void AK35KillerTeleportPoint::OnDecoyDespawn()
{

}

void AK35KillerTeleportPoint::Multicast_OnCancelledDestroyInteraction_Implementation(ADBDPlayer* caughtSurvivor)
{

}

bool AK35KillerTeleportPoint::IsSurvivorAbleToDestroyHusk() const
{
	return false;
}

bool AK35KillerTeleportPoint::IsLocalPlayerOverlapping() const
{
	return false;
}

bool AK35KillerTeleportPoint::IsKillerTeleportingToThis() const
{
	return false;
}

bool AK35KillerTeleportPoint::IsKillerAbleToTeleportToThisPoint() const
{
	return false;
}

EK35KillerTeleportPointState AK35KillerTeleportPoint::GetState() const
{
	return EK35KillerTeleportPointState::None;
}

void AK35KillerTeleportPoint::Authority_OnSpawnComplete()
{

}

void AK35KillerTeleportPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AK35KillerTeleportPoint, _killerTeleportPointState);
	DOREPLIFETIME(AK35KillerTeleportPoint, _isAcquiredFromPool);
	DOREPLIFETIME(AK35KillerTeleportPoint, _killerTeleportPointInteractable);
}

AK35KillerTeleportPoint::AK35KillerTeleportPoint()
{
	this->_rotationSpeed = 5.000000;
	this->_minRotationDistance = 300.000000;
	this->_dialogRange = 3000.000000;
	this->_decoyTouchDistance = 100.000000;
	this->_killerTeleportLingerTime = 0.300000;
	this->_killerTeleportPointInteractableClass = NULL;
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("DBDOutline"));
	this->_outlineStrategy = CreateDefaultSubobject<UK35KillerTeleportPointOutlineStrategy>(TEXT("KillerTeleportPointOutlineStrategy"));
	this->_targetOverlapComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TargetOverlapComponent"));
	this->_playerOverlapComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerOverlapComponent"));
	this->_primitivesRegistererComponent = CreateDefaultSubobject<UPrimitivesRegistererComponent>(TEXT("PrimitivesRegistererComponent"));
	this->_clippableProviderComponent = CreateDefaultSubobject<UClippableProviderComponent>(TEXT("UClippableProviderComponent"));
	this->_headSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("HeadSphereComponent"));
	this->_bodyCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BodyCapsuleComponent"));
	this->_visionCheckingPoints = TArray<USceneComponent*>();
	this->_navModifierComponent = CreateDefaultSubobject<UDBDNavModifierComponent>(TEXT("Nav Modifier Component"));
	this->_dangerPredictionComponent = CreateDefaultSubobject<UK35KillerTeleportPointDangerPredictionComponent>(TEXT("K35KillerTeleportPointDangerPredictionComponent"));
	this->_killerTeleportPointState = EK35KillerTeleportPointState::None;
	this->_isAcquiredFromPool = false;
	this->_killerTeleportPointInteractable = NULL;
	this->_overlappingPlayers = TSet<TWeakObjectPtr<ADBDPlayer>>();
	this->_objectState = CreateDefaultSubobject<UGameplayTagContainerComponent>(TEXT("ObjectState"));
}
