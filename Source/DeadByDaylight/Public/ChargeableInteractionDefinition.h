#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "ESkillCheckCustomType.h"
#include "ChargeableDefSkillCheckResponse.h"
#include "EChargeableInteractionBarType.h"
#include "ChargeableInteractionDefinition.generated.h"

class ACollectable;
class ADBDPlayer;
class UChargeableComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChargeableInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FChargeableDefSkillCheckResponse SkillCheckResponseAestheticDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FChargeableDefSkillCheckResponse SkillCheckResponseAuthorityDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopInteractionOnChargeComplete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasProgressivelyHarderSkillChecks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProgressiveDifficultyModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EChargeableInteractionBarType ProgressBarType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> ProgressPips;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HideProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowItemIcon;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _chargeableComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _tutorialChargeableMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool ShowSpeedProficiencyForMultipleInteractors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _interactionSpecificActionSpeedTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _interactionSpecificActionSpeedMultiplicativeTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _interactionSpecificActionDurationAdditiveTags;

public:
	UFUNCTION(BlueprintPure)
	bool ShouldShowSpeedProficiencyForMultipleInteractors() const;

	UFUNCTION(BlueprintCallable)
	void SetTutorialChargeableMultiplier(float multiplierValue);

	UFUNCTION(BlueprintCallable)
	void SetSpeedBase(float speedBase);

	UFUNCTION(BlueprintCallable)
	void SetSecondsToCharge(float secondsToCharge);

	UFUNCTION(BlueprintCallable)
	void SetChargeableComponent(UChargeableComponent* chargeableComponent, bool isNullAllowed);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSkillCheckResponseAuthorityBP(ADBDPlayer* player, bool success, bool bonus, bool hadInput, ESkillCheckCustomType type);

protected:
	UFUNCTION(BlueprintCallable)
	void OnSkillCheckResponseAuthority(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSkillCheckResponseAestheticBP(ADBDPlayer* player, bool success, bool bonus, bool hadInput, ESkillCheckCustomType type);

protected:
	UFUNCTION(BlueprintCallable)
	void OnSkillCheckResponseAesthetic(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, bool hadInput, ESkillCheckCustomType type);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInteractionCompletionStateChanged(ADBDPlayer* player, bool complete);

public:
	UFUNCTION(BlueprintPure)
	bool IsChargeComplete(const ADBDPlayer* currentlyInteractingPlayer) const;

	UFUNCTION(BlueprintPure)
	bool HasSkillCheckHappened(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetTunableValue(FName tunableValueID, float defaultValue) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetSuccessProbability() const;

	UFUNCTION(BlueprintPure)
	float GetSkillCheckProbability(const ADBDPlayer* interactingPlayer) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	float GetSkillCheckFailureTimePenalty() const;

	UFUNCTION(BlueprintPure)
	float GetSkillCheckFailurePercentPenalty(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetSkillCheckDifficulityModifier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	float GetSkillCheckCharge(ADBDPlayer* player, bool success, bool bonus, ESkillCheckCustomType type) const;

	UFUNCTION(BlueprintPure)
	int32 GetPipsPassed() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetPerkMultiplier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetMultiplicativeLuckBonus(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetMaxCharge() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetItemEfficiencyModifier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	float GetInteractionChargeSpeedMultiplier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetGoodSkillCheckSuccessPercentReward(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	float GetChargeSpeedModifier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetChargeAmountForTime(float deltaSeconds, ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	UChargeableComponent* GetChargeableComponent() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetBonusSkillCheckZoneSizeModifier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetBonusSkillCheckSuccessPercentReward(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetAdditiveLuckBonus(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintPure)
	float GetAdditiveChargeTimeReductionAsMultiplier(const ADBDPlayer* character) const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ResetCharge(ADBDPlayer* character);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ChargeWithItem(float deltaSeconds, ACollectable* item, ADBDPlayer* character);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_AddCharge(float deltaSeconds, ADBDPlayer* character, bool isChargeFromItem);

public:
	UChargeableInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UChargeableInteractionDefinition) { return 0; }
