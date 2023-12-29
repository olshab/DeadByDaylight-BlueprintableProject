#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "FlurryComboScoreComponent.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UFlurryComboScoreComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ComboScore, meta=(AllowPrivateAccess=true))
	float _comboScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _timeAddedByComboRank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _timeForCombo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _consecutiveHitsRequiredScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<float> _thresholds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<float> _thresholdsScoreForAudio;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _comboScoreEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _comboExtendSuperModeStatusEffectClass;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ComboScore() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFlurryComboScoreComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFlurryComboScoreComponent) { return 0; }
