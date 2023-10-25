#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DownloadMultiTextureTask.generated.h"

class UTexture2DDynamic;
class UDownloadingTextureTask;

UCLASS(Blueprintable)
class DYNAMICCONTENT_API UDownloadMultiTextureTask : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UDownloadingTextureTask*> _downloadingTasks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FName, UTexture2DDynamic*> _downloadedTextures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	int32 _remainingTasks;

private:
	UFUNCTION(BlueprintCallable)
	void OnTextureDownloadComplete(UDownloadingTextureTask* taskCompleted);

public:
	UDownloadMultiTextureTask();
};

FORCEINLINE uint32 GetTypeHash(const UDownloadMultiTextureTask) { return 0; }
