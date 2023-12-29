#pragma once

#include "CoreMinimal.h"
#include "RemoteContentCacheLocalManifestEntry.h"
#include "RemoteContentCacheLocalManifest.generated.h"

USTRUCT(BlueprintType)
struct FRemoteContentCacheLocalManifest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRemoteContentCacheLocalManifestEntry> Entries;

public:
	REMOTECONTENTCACHE_API FRemoteContentCacheLocalManifest();
};

FORCEINLINE uint32 GetTypeHash(const FRemoteContentCacheLocalManifest) { return 0; }
