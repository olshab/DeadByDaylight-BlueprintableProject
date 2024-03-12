#pragma once

#include "CoreMinimal.h"
#include "S3RemoteContentManifestEntry.generated.h"

USTRUCT(BlueprintType)
struct FS3RemoteContentManifestEntry
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Schema;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Uri;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ContentVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PackagedPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DownloadStrategy;

public:
	DEADBYDAYLIGHT_API FS3RemoteContentManifestEntry();
};

FORCEINLINE uint32 GetTypeHash(const FS3RemoteContentManifestEntry) { return 0; }
