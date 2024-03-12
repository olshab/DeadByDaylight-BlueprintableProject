#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERemoteContentDownloadStrategy.h"
#include "RemoteContentCacheEntry.generated.h"

USTRUCT(BlueprintType)
struct FRemoteContentCacheEntry
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Schema;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Uri;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ContentVersion;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath PackagedObjectPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ERemoteContentDownloadStrategy DownloadStrategy;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isPackaged;

public:
	REMOTECONTENTCACHE_API FRemoteContentCacheEntry();
};

FORCEINLINE uint32 GetTypeHash(const FRemoteContentCacheEntry) { return 0; }
