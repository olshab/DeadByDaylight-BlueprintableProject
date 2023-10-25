#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "EDetectionZone.h"
#include "GuardAttackComponent.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGuardAttackComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _killerInstinctEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _killerInstinctEffectDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EDetectionZone _detectionZoneToUse;

	UPROPERTY(EditAnywhere)
	TSet<TWeakObjectPtr<ACamperPlayer>> _survivorsInZone;

public:
	UGuardAttackComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGuardAttackComponent) { return 0; }
