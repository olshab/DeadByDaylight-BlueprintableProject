#pragma once

#include "CoreMinimal.h"
#include "S3SecurityConfig.generated.h"

USTRUCT(BlueprintType)
struct FS3SecurityConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowServerCheats;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AllowClientGuestProviderOnServerLogin;

public:
	DEADBYDAYLIGHT_API FS3SecurityConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3SecurityConfig) { return 0; }
