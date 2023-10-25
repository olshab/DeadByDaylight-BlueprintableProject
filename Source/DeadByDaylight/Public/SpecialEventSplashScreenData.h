#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "SpecialEventSplashScreenData.generated.h"

class ADBDLogo;

USTRUCT(BlueprintType)
struct FSpecialEventSplashScreenData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Enabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Delay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<ADBDLogo> DBDLogoClass;

public:
	DEADBYDAYLIGHT_API FSpecialEventSplashScreenData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventSplashScreenData) { return 0; }
