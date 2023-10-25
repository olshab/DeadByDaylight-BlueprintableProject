#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "WereGonnaLiveForever.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UWereGonnaLiveForever : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _healSpeedIncrease;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _enduranceEffectLevels;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _healSpeedFromDyingStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _enduranceEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_PerkEnabled, Transient, meta=(AllowPrivateAccess=true))
	bool _isPerkEnabled;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_PerkEnabled();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UWereGonnaLiveForever();
};

FORCEINLINE uint32 GetTypeHash(const UWereGonnaLiveForever) { return 0; }
