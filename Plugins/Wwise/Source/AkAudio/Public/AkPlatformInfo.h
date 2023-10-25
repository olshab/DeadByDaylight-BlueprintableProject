#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkPlatformInfo.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkPlatformInfo : public UObject
{
	GENERATED_BODY()

public:
	UAkPlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkPlatformInfo) { return 0; }
