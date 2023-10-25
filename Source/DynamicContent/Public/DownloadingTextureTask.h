#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DownloadingTextureTask.generated.h"

class UTexture2DDynamic;
class UAsyncTaskDownloadCacheImage;

UCLASS(Blueprintable)
class DYNAMICCONTENT_API UDownloadingTextureTask : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAsyncTaskDownloadCacheImage* _downloadingTask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FString _url;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UTexture2DDynamic* _downloadedTexture;

private:
	UFUNCTION(BlueprintCallable)
	void OnDownloadSucceeded(UTexture2DDynamic* textureDownloaded);

	UFUNCTION(BlueprintCallable)
	void OnDownloadFailed(UTexture2DDynamic* textureDownloaded);

public:
	UDownloadingTextureTask();
};

FORCEINLINE uint32 GetTypeHash(const UDownloadingTextureTask) { return 0; }
