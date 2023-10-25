#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K31P02.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealAuraToKillerEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _revealAuraSeconds;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _screamDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isPerkActive;

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_RevealAndMakeSurvivorScream(ACamperPlayer* survivor);

public:
	UFUNCTION(BlueprintPure)
	float GetScreamDistance() const;

	UFUNCTION(BlueprintPure)
	float GetRevealAuraSeconds() const;

	UFUNCTION(BlueprintPure)
	float GetActivePerkDurationAtLevel() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_RevealAndMakeSurvivorScream(ACamperPlayer* survivorPlayer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31P02();
};

FORCEINLINE uint32 GetTypeHash(const UK31P02) { return 0; }
