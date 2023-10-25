#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ExplorableTileInfo.generated.h"

USTRUCT(BlueprintType)
struct FExplorableTileInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGuid Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBox Bounds;

public:
	DBDBOTS_API FExplorableTileInfo();
};

FORCEINLINE uint32 GetTypeHash(const FExplorableTileInfo) { return 0; }
