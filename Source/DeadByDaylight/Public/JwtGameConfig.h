#pragma once

#include "CoreMinimal.h"
#include "JwtGameConfig.generated.h"

USTRUCT(BlueprintType)
struct FJwtGameConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Enabled;

public:
	DEADBYDAYLIGHT_API FJwtGameConfig();
};

FORCEINLINE uint32 GetTypeHash(const FJwtGameConfig) { return 0; }
