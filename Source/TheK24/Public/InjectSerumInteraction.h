#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "TunableStat.h"
#include "InjectSerumInteraction.generated.h"

class ASlasherPlayer;
class ACamperPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UInjectSerumInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _injectSerumKillerInstinctTime;

	UPROPERTY(EditAnywhere)
	FGameplayTag _scoreEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _serumApplyHeal;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnSurvivorCured_Cosmetic();

private:
	UFUNCTION(BlueprintCallable)
	void OnKillerSet(ASlasherPlayer* killer);

protected:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetInjectionTarget() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_CureSurvivor(ACamperPlayer* camperPlayer);

public:
	UInjectSerumInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UInjectSerumInteraction) { return 0; }
