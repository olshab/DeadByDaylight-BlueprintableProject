#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TrailNode.generated.h"

UCLASS(Blueprintable)
class ATrailNode : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_PreviousNodePosition, Transient)
	FVector PreviousNodePosition;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_PreviousNodePosition();

	UFUNCTION(BlueprintPure)
	bool IsOwnerLocallyObserved() const;

	UFUNCTION(BlueprintPure)
	bool IsFirstNode() const;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Cosmetic_PrepareForRemoval();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Client_UpdateTrail();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ATrailNode();
};

FORCEINLINE uint32 GetTypeHash(const ATrailNode) { return 0; }
