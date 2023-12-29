#pragma once

#include "CoreMinimal.h"
#include "RemoteContentCacheLocalManifestEntry.generated.h"

USTRUCT(BlueprintType)
struct FRemoteContentCacheLocalManifestEntry
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Uri;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ContentVersion;

public:
	REMOTECONTENTCACHE_API FRemoteContentCacheLocalManifestEntry();
};

FORCEINLINE uint32 GetTypeHash(const FRemoteContentCacheLocalManifestEntry) { return 0; }
