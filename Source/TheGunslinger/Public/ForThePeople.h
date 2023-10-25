#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SecondaryInteractionProperties.h"
#include "Templates/SubclassOf.h"
#include "ForThePeople.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UForThePeople : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SetIsHealStartedOnServer, meta=(AllowPrivateAccess=true))
	bool _isHealStartedOnServer;

	UPROPERTY(EditAnywhere)
	float _brokenEffectDurations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _forThePeopleBrokenEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _forThePeopleObsessionEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSecondaryInteractionProperties _secondaryActionProperties;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_OnActionInputPressed();

	UFUNCTION(BlueprintCallable)
	void OnRep_SetIsHealStartedOnServer() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnHealingAbilityUsed(ACamperPlayer* healingSurvivor, ACamperPlayer* healedSurvivor);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_OnHealAbilityUsed(ACamperPlayer* healer, ACamperPlayer* healTarget, float amountHealed);

public:
	UFUNCTION(BlueprintPure)
	float GetBrokenEffectDurationAtLevel() const;

private:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_OnActionInputPressedEnded();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UForThePeople();
};

FORCEINLINE uint32 GetTypeHash(const UForThePeople) { return 0; }
