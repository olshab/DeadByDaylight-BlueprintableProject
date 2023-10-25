#pragma once

#include "CoreMinimal.h"
#include "MovementSettings.h"
#include "Ethereal.h"
#include "Components/ActorComponent.h"
#include "EtherealComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UEtherealComponent : public UActorComponent, public IMovementSettings, public IEthereal
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_OnIsEtherealChanged, meta=(AllowPrivateAccess=true))
	bool _isEthereal;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetIsEthereal(float timestamp, bool ethereal);

	UFUNCTION(BlueprintCallable)
	void OnRep_OnIsEtherealChanged();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UEtherealComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEtherealComponent) { return 0; }
