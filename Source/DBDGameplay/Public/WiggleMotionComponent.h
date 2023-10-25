#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "ESkillCheckCustomType.h"
#include "WiggleMotionComponent.generated.h"

class UDBDCharacterMovementComponent;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UWiggleMotionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _carriedPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDBDCharacterMovementComponent* _ownerMovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _goodSkillCheckBumpsAmplitude;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _greatSkillCheckBumpsAmplitude;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsBeingWiggled(const bool isBeingWiggled);

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetIsBeingWiggled(const bool isBeingWiggled);

	UFUNCTION(BlueprintCallable)
	void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnSurvivorRemoved(ADBDPlayer* target);

	UFUNCTION(BlueprintCallable)
	void OnSurvivorPickedUp(ADBDPlayer* target);

	UFUNCTION(BlueprintCallable)
	void OnHideWiggleSkillCheck(ESkillCheckCustomType type);

public:
	UWiggleMotionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWiggleMotionComponent) { return 0; }
