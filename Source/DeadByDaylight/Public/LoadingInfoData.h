#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "LoadingInfoData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FLoadingInfoData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAvailableForKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAvailableForSurvivor;

public:
	DEADBYDAYLIGHT_API FLoadingInfoData();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingInfoData) { return 0; }
