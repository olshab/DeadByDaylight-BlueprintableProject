#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "IllusionaryDoctorEffect.generated.h"

class AIllusionaryDoctor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIllusionaryDoctorEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AIllusionaryDoctor> _illusionaryDoctorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	AIllusionaryDoctor* _illusionaryDoctor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _madness2IllusionaryDoctorIntervalMinimum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _madness2IllusionaryDoctorIntervalMaximum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _madness3IllusionaryDoctorIntervalMinimum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _madness3IllusionaryDoctorIntervalMaximum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _illusionaryDoctorMaximumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _illusionaryDoctorMinimumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _dotProductMinimumAcceptanceValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _illusionaryDoctorApparitionDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _numberOfAttempsToFindIllusionaryDoctorTargetLocationPerTick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IllusionaryDoctorTransform, meta=(AllowPrivateAccess=true))
	FTransform _illusionaryDoctorTransform;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IllusionaryDoctorTransform();

	UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
	void Multicast_DebugDisplayInfo(const float timeRemainingBeforeActivation, const FColor& messageColor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UIllusionaryDoctorEffect();
};

FORCEINLINE uint32 GetTypeHash(const UIllusionaryDoctorEffect) { return 0; }
