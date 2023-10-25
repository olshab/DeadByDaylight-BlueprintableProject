#pragma once

#include "CoreMinimal.h"
#include "LoadingImagesHintInfo.h"
#include "Styling/SlateBrush.h"
#include "LoadingImages.generated.h"

USTRUCT(BlueprintType)
struct FLoadingImages
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FSlateBrush> Images;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FLoadingImagesHintInfo> ImagesHintInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAvailableForSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAvailableForKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsGenericImages;

public:
	DYNAMICCONTENT_API FLoadingImages();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingImages) { return 0; }
