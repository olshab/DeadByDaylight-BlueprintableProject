#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "ELeanState.h"
#include "GhostKillerAnalytics.h"
#include "GhostKillerAnalyticsComponent.generated.h"

class UChargeableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGhostKillerAnalyticsComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FGhostKillerAnalytics _ghostKillerAnalytics;

private:
	UFUNCTION(BlueprintCallable)
	void Local_OnStalkModeChanged(bool isInStalkMode);

	UFUNCTION(BlueprintCallable)
	void Local_OnLeanStateChanged(ELeanState leanState);

	UFUNCTION(BlueprintCallable)
	void Local_OnIsStealthChanged(bool isStealth);

	UFUNCTION(BlueprintCallable)
	void Authority_OnStalkChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

	UFUNCTION()
	void Authority_OnPreAttackSuccess(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGhostKillerAnalyticsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGhostKillerAnalyticsComponent) { return 0; }
