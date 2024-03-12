#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "DamageData.h"
#include "GeneratorDamageComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGeneratorDamageComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCosmeticMakeSurvivorScreamDelegate, const ADBDPlayer*, screamingSurvivor);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCosmeticGeneratorDamagedDelegate, bool, intense);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FCosmeticGeneratorDamagedDelegate Cosmetic_OnGeneratorDamaged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FCosmeticMakeSurvivorScreamDelegate Cosmetic_MakeSurvivorScream;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_DamageData, Transient, meta=(AllowPrivateAccess=true))
	FDamageData _damageData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _gradualRegressionPercentPerDamage;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_DamageData();

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_DamageEffects(const float immediateRegressionPercent, const TArray<ADBDPlayer*>& repairers, const bool playLoudNoise);

public:
	UFUNCTION(BlueprintPure)
	bool IsRegressing() const;

	UFUNCTION(BlueprintPure)
	bool IsIntenseDamage() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGeneratorDamageComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorDamageComponent) { return 0; }
