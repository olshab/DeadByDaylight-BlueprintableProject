#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LRUTextureCache.h"
#include "TaskContainer.h"
#include "DynamicContentHolder.generated.h"

class UDownloadMultiTextureTask;
class ULoopBannerProvider;
class ULoadingImagesDataProvider;

UCLASS(Blueprintable)
class DYNAMICCONTENT_API UDynamicContentHolder : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FLRUTextureCache _loadedTextures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FTaskContainer> _currentTasks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ULoopBannerProvider* _marketingBannerProvider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ULoopBannerProvider* _eventsBannerProvider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ULoadingImagesDataProvider* _loadingImagesDataProvider;

private:
	UFUNCTION(BlueprintCallable)
	void OnDownloadingTaskComplete(UDownloadMultiTextureTask* completeTask);

public:
	UDynamicContentHolder();
};

FORCEINLINE uint32 GetTypeHash(const UDynamicContentHolder) { return 0; }
