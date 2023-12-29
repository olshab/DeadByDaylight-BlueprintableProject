#pragma once

#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "StoreCharactersFiltersData.generated.h"

USTRUCT(BlueprintType)
struct FStoreCharactersFiltersData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsFavorite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EItemRarity, bool> RarityFiltersMap;

public:
	DBDUIVIEWINTERFACES_API FStoreCharactersFiltersData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCharactersFiltersData) { return 0; }
