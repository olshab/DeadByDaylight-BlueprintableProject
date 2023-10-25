#pragma once

#include "CoreMinimal.h"
#include "BackendCinematicsContentData.h"
#include "BackendCinematicsContent.generated.h"

USTRUCT(BlueprintType)
struct FBackendCinematicsContent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FBackendCinematicsContentData> Cinematics;

public:
	DEADBYDAYLIGHT_API FBackendCinematicsContent();
};

FORCEINLINE uint32 GetTypeHash(const FBackendCinematicsContent) { return 0; }
