#pragma once

#include "CoreMinimal.h"
#include "BaseCamperCollectable.h"
#include "Medkit.generated.h"

class UParticleSystem;
class ADBDPlayer;
class UAkComponent;
class UAkAudioBank;
class UChargerComponent;
class UAkAudioEvent;

UCLASS(Blueprintable)
class DBDGAMEPLAY_API AMedkit : public ABaseCamperCollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UAkComponent* _akComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UChargerComponent* _charger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UParticleSystem* _dustRingTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _medkitGetAkEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _medkitDropAkEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioBank* _medkitBank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _healOtherChargeMultiplier;

public:
	UFUNCTION(BlueprintCallable)
	void UseCharge(float seconds);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnMedkitHealedCamper(ADBDPlayer* healedPlayer);

	UFUNCTION(BlueprintPure)
	bool HasCharge() const;

	UFUNCTION(BlueprintPure)
	float GetChargeMultiplier() const;

	UFUNCTION(BlueprintPure)
	float GetCharge() const;

protected:
	UFUNCTION(BlueprintCallable)
	void Authority_OnChargeStateChange(const bool empty);

	UFUNCTION(BlueprintCallable)
	void Authority_OnAnyOngoingInteractionChanged(const bool isInteracting);

	UFUNCTION(BlueprintCallable)
	void Authority_ConsumeIfNotInteracting();

public:
	AMedkit();
};

FORCEINLINE uint32 GetTypeHash(const AMedkit) { return 0; }
