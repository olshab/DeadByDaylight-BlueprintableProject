#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "DBDTunableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "CartersSpark.generated.h"

class UInteractionAttacherComponent;
class ADBDPlayer;
class UStatusEffect;
class USurvivorCartersSparkComponent;
class UCartersSparkComponent;
class ACamperPlayer;

UCLASS(Blueprintable)
class ACartersSpark : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _shockAttackComboTimerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<USurvivorCartersSparkComponent> _survivorCartersSparkComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _doctorBlockInterruptEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _madnessStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _illusionaryDoctorEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UCartersSparkComponent* _cartersSparkComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UInteractionAttacherComponent* _interactionAttacherComponent;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnShockTherapyZoneDetonated(ADBDPlayer* killer, const int32 survivorsHitCount);

	UFUNCTION(BlueprintCallable)
	void CancelSurvivorInteraction(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void Authority_StartShockAttackComboTimer(ACamperPlayer* shockedSurvivor);

public:
	ACartersSpark();
};

FORCEINLINE uint32 GetTypeHash(const ACartersSpark) { return 0; }
