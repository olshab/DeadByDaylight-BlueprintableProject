#include "K35Decoy.h"
#include "Components/CapsuleComponent.h"
#include "PrimitivesRegistererComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "UObject/NoExportTypes.h"
#include "ClippableProviderComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainerComponent.h"

class ASlasherPlayer;
class UPrimitiveComponent;
class AActor;

void AK35Decoy::SetHuskVisibilityChecked(const bool isVisible)
{

}

void AK35Decoy::OnPlayerOverlapEnd(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex)
{

}

void AK35Decoy::OnPlayerOverlapBegin(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void AK35Decoy::OnKillerSet(ASlasherPlayer* killer)
{

}

void AK35Decoy::OnKillerCustomizationMeshChanged()
{

}

void AK35Decoy::OnIntroCompleted()
{

}

void AK35Decoy::Multicast_Spawn_Implementation(const FVector spawnLocation)
{

}

void AK35Decoy::Multicast_SelfDestruct_Implementation()
{

}

bool AK35Decoy::IsLocalPlayerOverlapping() const
{
	return false;
}

void AK35Decoy::Authority_OnSelfDestructTimerComplete()
{

}

AK35Decoy::AK35Decoy()
{
	this->_killerOverlapIgnoreOnSpawnDuration = 0.200000;
	this->_playerOverlapComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerOverlapComponent"));
	this->_primitivesRegistererComponent = CreateDefaultSubobject<UPrimitivesRegistererComponent>(TEXT("PrimitivesRegistererComponent"));
	this->_clippableProviderComponent = CreateDefaultSubobject<UClippableProviderComponent>(TEXT("UClippableProviderComponent"));
	this->_headSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("HeadSphereComponent"));
	this->_bodySocketName = TEXT("joint_Pelvis_01");
	this->_headSocketName = TEXT("joint_Head_01");
	this->_bodyCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BodyCapsuleComponent"));
	this->_isTerrorRadiusAndRedStainActive = false;
	this->_overlappingPlayers = TSet<TWeakObjectPtr<ADBDPlayer>>();
	this->_objectState = CreateDefaultSubobject<UGameplayTagContainerComponent>(TEXT("ObjectState"));
}
