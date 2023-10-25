#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "ECamperDamageState.h"
#include "S36P02.generated.h"

class ACamperPlayer;
class UStatusEffect;
class UInteractionDefinition;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API US36P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _brokenStatusEffectSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _requiredHookStage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	int32 _currentHookStage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UInteractionDefinition> _perkInteractionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _perkInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _brokenStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _brokenEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _exhaustedEffectClass;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnRecoverAbilityButtonTriggeredCosmetic(ACamperPlayer* owningSurvivor);

public:
	UFUNCTION(BlueprintPure)
	float GetBrokenStatusDurationAtLevel() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnCamperHealthStateChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US36P02();
};

FORCEINLINE uint32 GetTypeHash(const US36P02) { return 0; }
