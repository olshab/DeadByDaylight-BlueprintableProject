#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S36P03.generated.h"

class ACamperPlayer;
class US36P03Effect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API US36P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsStatusEffectActiveOnOwningSurvivor, meta=(AllowPrivateAccess=true))
	bool _isStatusEffectActiveOnOwningSurvivor;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _cooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _perkRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<US36P03Effect> _noScratchMarksEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _healersAffected;

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
	US36P03();
};

FORCEINLINE uint32 GetTypeHash(const US36P03) { return 0; }
