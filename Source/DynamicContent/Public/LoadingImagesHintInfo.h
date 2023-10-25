#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "LoadingImagesHintInfo.generated.h"

USTRUCT(BlueprintType)
struct FLoadingImagesHintInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FSlateBrush Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAvailableForKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAvailableForSurvivor;

public:
	DYNAMICCONTENT_API FLoadingImagesHintInfo();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingImagesHintInfo) { return 0; }
