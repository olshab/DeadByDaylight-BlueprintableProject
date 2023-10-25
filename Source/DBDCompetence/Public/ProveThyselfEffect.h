#pragma once

#include "CoreMinimal.h"
#include "RemoveOnOriginatingSurvivorGoneStatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "ProveThyselfEffect.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UProveThyselfEffect : public URemoveOnOriginatingSurvivorGoneStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _proveThyselfRange;

protected:
	UFUNCTION(BlueprintCallable)
	void OnInRangeOfOriginatorChanged(const bool inRange, ACamperPlayer* survivor);

public:
	UProveThyselfEffect();
};

FORCEINLINE uint32 GetTypeHash(const UProveThyselfEffect) { return 0; }
