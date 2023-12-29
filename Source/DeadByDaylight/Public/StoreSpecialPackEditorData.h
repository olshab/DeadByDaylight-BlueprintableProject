#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTableRowBase.h"
#include "StoreSpecialPackItem.h"
#include "StoreSpecialPackEditorData.generated.h"

USTRUCT(BlueprintType)
struct FStoreSpecialPackEditorData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSoftObjectPath Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InclusionVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Discount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DLCId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FStoreSpecialPackItem> Content;

public:
	DEADBYDAYLIGHT_API FStoreSpecialPackEditorData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialPackEditorData) { return 0; }
