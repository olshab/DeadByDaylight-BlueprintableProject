#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AssetNetIdRow.generated.h"

USTRUCT(BlueprintType)
struct FAssetNetIdRow: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NetId;

public:
	NETWORKUTILITIES_API FAssetNetIdRow();
};

FORCEINLINE uint32 GetTypeHash(const FAssetNetIdRow) { return 0; }
