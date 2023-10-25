#pragma once

#include "CoreMinimal.h"
#include "EK25ProjectileDeactivateReason.h"
#include "K25ProjectileDeactivationData.generated.h"

class ACamperPlayer;

USTRUCT(BlueprintType)
struct FK25ProjectileDeactivationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EK25ProjectileDeactivateReason DeactivationReason;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName PhysicalSurfaceName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldReelBackProjectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasAppliedDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACamperPlayer* _survivorHit;

public:
	THEK25_API FK25ProjectileDeactivationData();
};

FORCEINLINE uint32 GetTypeHash(const FK25ProjectileDeactivationData) { return 0; }
