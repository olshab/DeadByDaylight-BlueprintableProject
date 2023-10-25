#pragma once

#include "CoreMinimal.h"
#include "DownloadProgression.generated.h"

USTRUCT(BlueprintType)
struct FDownloadProgression
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DownloadSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalDownloadedSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DownloadSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InstallProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDownloading;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DownloadStatus;

public:
	DEADBYDAYLIGHT_API FDownloadProgression();
};

FORCEINLINE uint32 GetTypeHash(const FDownloadProgression) { return 0; }
