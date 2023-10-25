#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelReadyToPlayRequirements.h"
#include "LevelReadyToPlayPlayerComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULevelReadyToPlayPlayerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_LevelReadyToPlayRequirementsTarget, Transient, meta=(AllowPrivateAccess=true))
	TArray<FLevelReadyToPlayRequirements> _levelReadyToPlayRequirementsTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FLevelReadyToPlayRequirements> _levelReadyToPlayRequirementState;

private:
	UFUNCTION(Server, Reliable)
	void Server_SetIsReadyToPlay(uint32 readyToPlay);

	UFUNCTION(BlueprintCallable)
	void OnRep_LevelReadyToPlayRequirementsTarget();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULevelReadyToPlayPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULevelReadyToPlayPlayerComponent) { return 0; }
