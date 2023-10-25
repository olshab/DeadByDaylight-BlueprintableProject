#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierContainer.h"
#include "GameplayModifierData.h"
#include "OnTokenCountChangedBP.h"
#include "Templates/SubclassOf.h"
#include "PerkInitializationData.h"
#include "EPerkTokenSoundStrategy.h"
#include "Perk.generated.h"

class UInteractionDefinition;
class UTimerObject;
class UBasePerkIconStrategy;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPerk : public UGameplayModifierContainer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, EditFixedSize, ReplicatedUsing=OnRep_ModifierData)
	FGameplayModifierData PerkLevelData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UBasePerkIconStrategy> PerkIconStrategyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnTokenCountChangedBP OnTokenCountChangedBP;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsUsable, meta=(AllowPrivateAccess=true))
	bool _isUsable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _keepImposedStatusEffectsOnEndPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool BroadcastWhenApplicable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool BroadcastOnTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool BroadcastCooldownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool BroadcastInactiveCooldownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool BroadcastAlways;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool SetInactiveDuringCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBasePerkIconStrategy* _perkIconStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_PerkInitializationData, Transient, meta=(AllowPrivateAccess=true))
	FPerkInitializationData _perkInitializationData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_TokenCount, Transient, meta=(AllowPrivateAccess=true))
	int32 _tokenCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	int32 _maxTokenCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EPerkTokenSoundStrategy _tokenSoundStrategy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CooldownTimer, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _cooldownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _hudIconTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _activatableInteraction;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsUsable(bool value);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_TokenCount(int32 oldCount);

	UFUNCTION(BlueprintCallable)
	void OnRep_PerkInitializationData();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsUsable() const;

	UFUNCTION(BlueprintCallable)
	void OnRep_CooldownTimer() const;

public:
	UFUNCTION(BlueprintPure)
	bool IsHudIconTimerDone() const;

	UFUNCTION(BlueprintPure)
	bool IsCooldownTimerDone() const;

	UFUNCTION(BlueprintPure)
	int32 GetTokenCount() const;

	UFUNCTION(BlueprintPure)
	int32 GetPerkLevel() const;

protected:
	UFUNCTION(BlueprintPure)
	UBasePerkIconStrategy* GetPerkIconStrategy() const;

public:
	UFUNCTION(BlueprintPure)
	int32 GetMaxTokenCount() const;

	UFUNCTION(BlueprintPure)
	bool GetIsUsable() const;

	UFUNCTION(BlueprintPure)
	float GetHudIconTimerElapsedTimePercent() const;

	UFUNCTION(BlueprintCallable)
	FGameplayModifierData GetGameplayModifierData();

protected:
	UFUNCTION(BlueprintPure)
	UTimerObject* GetCooldownTimer() const;

public:
	UFUNCTION(BlueprintCallable)
	void FireActivePerkEvent(const float percentage, const int32 chargeCount);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_TriggerHudIconTimer(float duration);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_TriggerCooldownTimer(const float cooldownTime);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetTokenCount(int32 value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetMaxTokenCount(int32 value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsUsable(bool value);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_IncrementToken();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_DecrementToken();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPerk();
};

FORCEINLINE uint32 GetTypeHash(const UPerk) { return 0; }
