#pragma once

#include "CoreMinimal.h"
#include "K28KillerLockerState.generated.h"

class UK28LockerComponent;

USTRUCT(BlueprintType)
struct FK28KillerLockerState
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK28LockerComponent* _lockerUsedByKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isTeleportingToLocker;

public:
	THEK28_API FK28KillerLockerState();
};

FORCEINLINE uint32 GetTypeHash(const FK28KillerLockerState) { return 0; }
