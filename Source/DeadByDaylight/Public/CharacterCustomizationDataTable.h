#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "CharacterCustomizationDataTable.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FCharacterCustomizationDataTable: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UDataTable> CustomizationStoreDB;

public:
	DEADBYDAYLIGHT_API FCharacterCustomizationDataTable();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterCustomizationDataTable) { return 0; }
