#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "FragileObjectComponent.generated.h"

class ACamperPlayer;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UFragileObjectComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFragileObjectStateChanged);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFragileObjectStateChanged OnObjectBroken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFragileObjectStateChanged OnObjectRepaired;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Repaired, Transient, meta=(AllowPrivateAccess=true))
	bool _repaired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minFallingHeight;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _generalObjectBreakingEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _previousCollector;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Repaired() const;

public:
	UFUNCTION(BlueprintPure)
	bool IsRepaired() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetPreviousCollector() const;

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_RepairFragileObject();

	UFUNCTION(BlueprintCallable)
	void Authority_OnCamperRemoved(ACamperPlayer* removedPlayer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFragileObjectComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFragileObjectComponent) { return 0; }
