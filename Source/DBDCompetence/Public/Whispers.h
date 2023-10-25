#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Whispers.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UWhispers : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _timeBetweenAudio;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SurvivorsInRange, meta=(AllowPrivateAccess=true))
	int32 _survivorsInRange;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnWhispersAudio();

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SurvivorsInRange();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_FireAudioEvent(const int32 survivorsInRange);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UWhispers();
};

FORCEINLINE uint32 GetTypeHash(const UWhispers) { return 0; }
