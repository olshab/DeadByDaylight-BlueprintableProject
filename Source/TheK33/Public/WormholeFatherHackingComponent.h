#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WormholeFatherHackingComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UWormholeFatherHackingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWrmFatherHackedStateChangedDelegate, bool, hasBeenHacked);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnWrmFatherHackedStateChangedDelegate Cosmetic_OnHasBeenHackedChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_HasBeenHacked, meta=(AllowPrivateAccess=true))
	bool _hasBeenHacked;

public:
	UFUNCTION(BlueprintCallable)
	void SetHasBeenHacked(const bool hasBeenHacked);

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_HasBeenHacked() const;

public:
	UFUNCTION(BlueprintPure)
	bool HasBeenHacked() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UWormholeFatherHackingComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWormholeFatherHackingComponent) { return 0; }
