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
	bool IsAvailable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOwned;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<EItemRarity, bool> _rarityFiltersMap;

public:
	DBDUIVIEWINTERFACES_API FStoreCharactersFiltersData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCharactersFiltersData) { return 0; }
