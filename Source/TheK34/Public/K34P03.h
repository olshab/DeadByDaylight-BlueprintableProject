#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K34P03.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK34P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _generatorRangeFromPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _hasAnyGeneratorsInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hasteEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _hasteEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _hasteEffectAmount;

	UPROPERTY(EditAnywhere)
	float _hasteLingerTimes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _disablePerkWhenExitGatesArePowered;

public:
	UFUNCTION(BlueprintCallable)
	bool HasAnyGeneratorsInRange() const;

	UFUNCTION(BlueprintPure)
	float GetHasteLingerTimeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHasteEffectAmount() const;

	UFUNCTION(BlueprintPure)
	float GetGeneratorRangeFromPlayer() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK34P03();
};

FORCEINLINE uint32 GetTypeHash(const UK34P03) { return 0; }
