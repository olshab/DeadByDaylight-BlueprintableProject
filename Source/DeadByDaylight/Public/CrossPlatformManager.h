#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CrossPlatformManager.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UCrossPlatformManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _crossPlayAllowedByPlatform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _crossPlayAllowedByKraken;

public:
	UCrossPlatformManager();
};

FORCEINLINE uint32 GetTypeHash(const UCrossPlatformManager) { return 0; }
