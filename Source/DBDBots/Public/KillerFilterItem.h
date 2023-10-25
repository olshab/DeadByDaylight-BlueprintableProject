#pragma once

#include "CoreMinimal.h"
#include "CharacterDropdown.h"
#include "KillerFilterItem.generated.h"

USTRUCT(BlueprintType)
struct FKillerFilterItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterDropdown Character;

public:
	DBDBOTS_API FKillerFilterItem();
};

FORCEINLINE uint32 GetTypeHash(const FKillerFilterItem) { return 0; }
