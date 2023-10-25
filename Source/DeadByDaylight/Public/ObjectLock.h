#pragma once

#include "CoreMinimal.h"
#include "ObjectLock.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FObjectLock
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<UObject> _lockingObject;

public:
	DEADBYDAYLIGHT_API FObjectLock();
};

FORCEINLINE uint32 GetTypeHash(const FObjectLock) { return 0; }
