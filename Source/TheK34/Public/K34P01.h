#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "ETotemState.h"
#include "Templates/SubclassOf.h"
#include "K34P01.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK34P01 : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _rampingBlindEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _rampingBlindRampTime;

	UPROPERTY(EditAnywhere)
	int32 _stunnedOrBlindedTimesRequired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _blindedEffectTime;

public:
	UFUNCTION(BlueprintPure)
	int32 GetStunnedOrBlindedTimesRequiredByLevel() const;

	UFUNCTION(BlueprintPure)
	int32 GetStunnedOrBlindedCount() const;

	UFUNCTION(BlueprintPure)
	float GetBlindedEffectTime() const;

private:
	UFUNCTION(BlueprintCallable, Client, Unreliable)
	void Client_UpdateHudIcon(float percent);

	UFUNCTION(BlueprintCallable)
	void Authority_OnTotemStateChanged(const ETotemState oldState, const ETotemState newState);

public:
	UK34P01();
};

FORCEINLINE uint32 GetTypeHash(const UK34P01) { return 0; }
