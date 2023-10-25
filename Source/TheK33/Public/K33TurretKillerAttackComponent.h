#pragma once

#include "CoreMinimal.h"
#include "ActorPairQueryHeightRange.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "RaycastProperties.h"
#include "K33TurretKillerAttackComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33TurretKillerAttackComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isAttacking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FRaycastProperties> _bipedRaycastProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FRaycastProperties> _quadrupedRaycastProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _killerDetectionRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FActorPairQueryHeightRange _killerDetectionHeightRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sphereTraceRadius;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33TurretKillerAttackComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretKillerAttackComponent) { return 0; }
