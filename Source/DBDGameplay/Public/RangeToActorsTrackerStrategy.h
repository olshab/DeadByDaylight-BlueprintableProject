#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "RangeToActorsTrackerStrategy.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class URangeToActorsTrackerStrategy : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _range;

private:
	UFUNCTION(BlueprintCallable)
	void OnInRangeToTrackedActorsChanged(const bool inRange);

public:
	URangeToActorsTrackerStrategy();
};

FORCEINLINE uint32 GetTypeHash(const URangeToActorsTrackerStrategy) { return 0; }
