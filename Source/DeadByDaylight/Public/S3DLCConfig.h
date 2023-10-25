#pragma once

#include "CoreMinimal.h"
#include "S3DLCAdditionalInfoEntry.h"
#include "S3DLCConfig.generated.h"

USTRUCT(BlueprintType)
struct FS3DLCConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FS3DLCAdditionalInfoEntry> DlcAdditionalInfo;

public:
	DEADBYDAYLIGHT_API FS3DLCConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3DLCConfig) { return 0; }
