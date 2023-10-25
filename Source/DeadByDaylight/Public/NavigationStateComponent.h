#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GuidingInfo.h"
#include "EImmobilizedState.h"
#include "NavigationStateComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UNavigationStateComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ImmobilizedState, meta=(AllowPrivateAccess=true))
	EImmobilizedState _immobilizedState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_GuidedState, meta=(AllowPrivateAccess=true))
	FGuidingInfo _guidedState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _local_oldGuidedPlayers;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ImmobilizedState(EImmobilizedState previousState);

	UFUNCTION(BlueprintCallable)
	void OnRep_GuidedState(const FGuidingInfo& previousState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UNavigationStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UNavigationStateComponent) { return 0; }
