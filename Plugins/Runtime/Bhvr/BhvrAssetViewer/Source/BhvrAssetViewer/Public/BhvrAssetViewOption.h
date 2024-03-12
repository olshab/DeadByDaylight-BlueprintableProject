#pragma once

#include "CoreMinimal.h"
#include "BhvrAssetViewOption.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FBhvrAssetViewOption
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Thumbnail;

public:
	BHVRASSETVIEWER_API FBhvrAssetViewOption();
};

FORCEINLINE uint32 GetTypeHash(const FBhvrAssetViewOption) { return 0; }
