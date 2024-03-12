#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "DBDTunableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "SteamPipeResetSwitch.generated.h"

class UDBDSkeletalMeshComponentBudgeted;
class USteamPipeManagerComponent;
class UChargeableComponent;

UCLASS(Blueprintable)
class DBDGAMEPLAY_API ASteamPipeResetSwitch : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _resetSoundDistance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<USteamPipeManagerComponent> _managerComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SharedChargeableComponent, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _sharedChargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsOnCooldown, meta=(AllowPrivateAccess=true))
	bool _isOnCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_NumberOfDisabledSteamPipes, meta=(AllowPrivateAccess=true))
	int32 _numberOfDisabledSteamPipes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _totalSteamPipesInLevel;

	UPROPERTY(EditAnywhere, Transient, Export)
	TWeakObjectPtr<USteamPipeManagerComponent> _steamPipeManagerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _canUseResetSwitch;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SharedChargeableComponent();

	UFUNCTION(BlueprintCallable)
	void OnRep_NumberOfDisabledSteamPipes();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsOnCooldown();

public:
	UFUNCTION(BlueprintPure)
	int32 GetTotalSteamPipesInLevel() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTotalSteamPipesInLevelChanged(const int32 totalSteamPipesInLevel);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSwitchTriggered(float cooldownTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnCooldownDone();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_NumberOfDisabledSteamPipesChanged(const int32 numberOfDisabledSteamPipes);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASteamPipeResetSwitch();
};

FORCEINLINE uint32 GetTypeHash(const ASteamPipeResetSwitch) { return 0; }
