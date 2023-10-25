#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "K28LockLockbarInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28LockLockbarInteraction : public UBaseLockerInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _survivorAlignementTolerance;

public:
	UK28LockLockbarInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK28LockLockbarInteraction) { return 0; }
