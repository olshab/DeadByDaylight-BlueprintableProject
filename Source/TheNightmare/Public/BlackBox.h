#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "DBDTunableRowHandle.h"
#include "Templates/SubclassOf.h"
#include "BlackBox.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBlackBox : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _blockDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _dreamworldSingleGateBlockerStatusEffectClass;

public:
	UBlackBox();
};

FORCEINLINE uint32 GetTypeHash(const UBlackBox) { return 0; }
