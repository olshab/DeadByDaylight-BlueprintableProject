#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InvitationPlayerComponent.h"
#include "InvitationKillerComponent.generated.h"

class UBloodlustExposeInteraction;
class URemoteDestroyInteraction;
class UKillerNegateStunInteraction;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UInvitationKillerComponent : public UInvitationPlayerComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UBloodlustExposeInteraction> _bloodlustExposeClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<URemoteDestroyInteraction> _remoteDestroyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UKillerNegateStunInteraction> _negateStunClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UBloodlustExposeInteraction* _bloodlustExposeInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	URemoteDestroyInteraction* _remoteDestroyInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_NegateStunInteraction, Transient, meta=(BindWidgetOptional))
	UKillerNegateStunInteraction* _negateStunInteraction;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_NegateStunInteraction(UKillerNegateStunInteraction* prevNegateStunInteraction);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetVignetteVisibility(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivateVFXOnKillerStunned();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInvitationKillerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInvitationKillerComponent) { return 0; }
