#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Adrenaline.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAdrenaline : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _exhaustionDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _speedEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _exhaustionEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _movementSpeedDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _movementSpeedPercentage;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DispatchAdrenalineEvents(const bool isHealthy, const float healAmount);

public:
	UFUNCTION(BlueprintPure)
	float GetExhaustionDuration() const;

public:
	UAdrenaline();
};

FORCEINLINE uint32 GetTypeHash(const UAdrenaline) { return 0; }
