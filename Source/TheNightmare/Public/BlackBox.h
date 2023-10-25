#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "DBDTunableRowHandle.h"
#include "BlackBox.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBlackBox : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _blockDuration;

public:
	UBlackBox();
};

FORCEINLINE uint32 GetTypeHash(const UBlackBox) { return 0; }
