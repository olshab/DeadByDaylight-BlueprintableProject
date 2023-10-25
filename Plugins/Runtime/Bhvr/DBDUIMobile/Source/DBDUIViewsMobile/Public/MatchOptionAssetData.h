#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "MatchOptionAssetData.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FMatchOptionAssetData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText TextName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UPaperSprite> Icon;

public:
	DBDUIVIEWSMOBILE_API FMatchOptionAssetData();
};

FORCEINLINE uint32 GetTypeHash(const FMatchOptionAssetData) { return 0; }
