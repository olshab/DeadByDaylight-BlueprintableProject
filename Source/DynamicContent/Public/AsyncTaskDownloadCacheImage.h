#pragma once

#include "CoreMinimal.h"
#include "Blueprint/AsyncTaskDownloadImage.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncTaskDownloadCacheImage.generated.h"

UCLASS(Blueprintable)
class DYNAMICCONTENT_API UAsyncTaskDownloadCacheImage : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FDownloadImageDelegate OnSuccess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FDownloadImageDelegate OnFail;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FString _url;

public:
	UAsyncTaskDownloadCacheImage();
};

FORCEINLINE uint32 GetTypeHash(const UAsyncTaskDownloadCacheImage) { return 0; }
