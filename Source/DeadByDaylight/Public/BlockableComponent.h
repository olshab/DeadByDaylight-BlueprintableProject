#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlockableReplicatedDatum.h"
#include "BlockableComponent.generated.h"

class UBlockElement;
class ADBDPlayer;
class UObject;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBlockableComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ReplicatedDatum, Transient, meta=(AllowPrivateAccess=true))
	FBlockableReplicatedDatum _replicatedDatum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UBlockElement*> _blockElements;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedDatum() const;

public:
	UFUNCTION(BlueprintCallable)
	void Authority_RemoveBlock(const UObject* source);

	UFUNCTION(BlueprintCallable)
	void Authority_AddTimedBlock(const UObject* source, const float duration, const TSet<ADBDPlayer*>& affectedPlayers);

	UFUNCTION(BlueprintCallable)
	void Authority_AddBlock(const UObject* source, const TSet<ADBDPlayer*>& affectedPlayers);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBlockableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlockableComponent) { return 0; }
