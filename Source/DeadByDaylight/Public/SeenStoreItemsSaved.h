#pragma once

#include "CoreMinimal.h"
#include "SaveDataBase.h"
#include "SeenStoreItemsSaved.generated.h"

USTRUCT(BlueprintType)
struct FSeenStoreItemsSaved: public FSaveDataBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FString NewStoreItemsStartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	TArray<FString> SeenNewStoreItems;

public:
	DEADBYDAYLIGHT_API FSeenStoreItemsSaved();
};

FORCEINLINE uint32 GetTypeHash(const FSeenStoreItemsSaved) { return 0; }
