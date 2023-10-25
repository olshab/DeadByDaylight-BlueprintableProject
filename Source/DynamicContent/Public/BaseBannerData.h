#pragma once

#include "CoreMinimal.h"
#include "BaseBannerData.generated.h"

USTRUCT(BlueprintType)
struct FBaseBannerData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText TitleId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString BannerContentId;

public:
	DYNAMICCONTENT_API FBaseBannerData();
};

FORCEINLINE uint32 GetTypeHash(const FBaseBannerData) { return 0; }
