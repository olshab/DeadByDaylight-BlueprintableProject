#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "TerritorialImperative.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTerritorialImperative : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealSurvivorStatusEffect;

	UPROPERTY(EditAnywhere)
	float _survivorRevealedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _killerMinimumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _perkCooldown;

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnPerkTriggered(ADBDPlayer* triggerer);

public:
	UTerritorialImperative();
};

FORCEINLINE uint32 GetTypeHash(const UTerritorialImperative) { return 0; }
