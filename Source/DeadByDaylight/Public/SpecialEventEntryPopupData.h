#pragma once

#include "CoreMinimal.h"
#include "SpecialEventDetailsTabData.h"
#include "SpecialEventEntryPopupData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventEntryPopupData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> AdditionalStoreItemIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> AdditionalStoreEventsIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> StoreItemIdPriorityOrdering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseDetailsTab;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSpecialEventDetailsTabData DetailsTabData;

public:
	DEADBYDAYLIGHT_API FSpecialEventEntryPopupData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventEntryPopupData) { return 0; }
