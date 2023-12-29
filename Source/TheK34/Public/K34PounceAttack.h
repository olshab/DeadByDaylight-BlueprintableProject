#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "K34PounceAttack.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK34_API UK34PounceAttack : public UPounceAttack
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sphereTraceRadiusObstruction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxSphereTraceDistanceObstruction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sphereTraceRadiusMidairLeap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sphereTraceStartForwardOffsetMidairLeap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sphereTraceEndForwardOffsetMidairLeap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _sphereTraceVerticalOffsetMidairLeap;

public:
	UK34PounceAttack();
};

FORCEINLINE uint32 GetTypeHash(const UK34PounceAttack) { return 0; }
