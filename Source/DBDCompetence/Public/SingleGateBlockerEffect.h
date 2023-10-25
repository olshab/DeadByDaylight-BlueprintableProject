#pragma once

#include "CoreMinimal.h"
#include "GateBlockerEffect.h"
#include "SingleGateBlockerEffect.generated.h"

class AEscapeDoor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USingleGateBlockerEffect : public UGateBlockerEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _distanceThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AEscapeDoor* _gate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	bool _isInRange;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USingleGateBlockerEffect();
};

FORCEINLINE uint32 GetTypeHash(const USingleGateBlockerEffect) { return 0; }
