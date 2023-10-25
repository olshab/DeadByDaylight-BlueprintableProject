#pragma once

#include "CoreMinimal.h"
#include "ItemUIData.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "EInventoryItemType.h"
#include "BaseItemData.generated.h"

class AActor;
class UDBDPrimaryDataAsset;

USTRUCT(BlueprintType)
struct FBaseItemData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInventoryItemType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemUIData UIData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText GenericDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> ItemBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UDBDPrimaryDataAsset> AssetData;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemId;

public:
	DEADBYDAYLIGHT_API FBaseItemData();
};

FORCEINLINE uint32 GetTypeHash(const FBaseItemData) { return 0; }
