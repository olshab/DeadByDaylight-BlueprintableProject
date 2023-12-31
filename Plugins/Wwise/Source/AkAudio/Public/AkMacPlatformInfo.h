#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInfo.h"
#include "AkMacPlatformInfo.generated.h"

UCLASS(Blueprintable)
class UAkMacPlatformInfo : public UAkPlatformInfo
{
	GENERATED_BODY()

public:
	UAkMacPlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkMacPlatformInfo) { return 0; }
