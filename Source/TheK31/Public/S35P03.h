#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S35P03.generated.h"

class ACamperPlayer;
class US35P03Effect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API US35P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsStatusEffectActiveOnOwningSurvivor, meta=(AllowPrivateAccess=true))
	bool _isStatusEffectActiveOnOwningSurvivor;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _cooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _speedBoost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _perkRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<US35P03Effect> _hasteEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _healedSurvivorsAffected;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsStatusEffectActiveOnOwningSurvivor();

public:
	UFUNCTION(BlueprintPure)
	float GetPerkRange() const;

	UFUNCTION(BlueprintPure)
	float GetCooldownDurationAtLevel() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US35P03();
};

FORCEINLINE uint32 GetTypeHash(const US35P03) { return 0; }
