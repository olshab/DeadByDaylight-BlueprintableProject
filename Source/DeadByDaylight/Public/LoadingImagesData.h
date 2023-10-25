#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "LoadingInfoData.h"
#include "LoadingImagesData.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FLoadingImagesData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UPaperSprite>> Images;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FLoadingInfoData> InfoData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAvailableForSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAvailableForKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsGenericImages;

public:
	DEADBYDAYLIGHT_API FLoadingImagesData();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingImagesData) { return 0; }
