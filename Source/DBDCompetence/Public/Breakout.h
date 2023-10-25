#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Breakout.generated.h"

class UStatusEffect;
class ASlasherPlayer;
class ADBDPlayer;
class ACamperPlayer;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBreakout : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _slasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _playerOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hasteStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _wiggleStatusEffect;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _hasteEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _wiggleEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _survivorDistanceMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsPerkActive, meta=(AllowPrivateAccess=true))
	bool _isPerkActive;

private:
	UFUNCTION(BlueprintCallable)
	void OnSlasherSet(ASlasherPlayer* slasher);

	UFUNCTION(BlueprintCallable)
	void OnRep_IsPerkActive();

public:
	UFUNCTION(BlueprintPure)
	float GetWiggleEffect() const;

	UFUNCTION(BlueprintPure)
	float GetSurvivorDistanceMax() const;

	UFUNCTION(BlueprintPure)
	float GetHasteEffectAtLevel() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnRangeChanged(const bool inRange);

	UFUNCTION(BlueprintCallable)
	void Authority_ImposeWiggleStatusEffect(ACamperPlayer* survivor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBreakout();
};

FORCEINLINE uint32 GetTypeHash(const UBreakout) { return 0; }
