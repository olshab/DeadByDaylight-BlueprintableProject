#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "DBDTableRowBaseWithId.generated.h"

USTRUCT(BlueprintType)
struct FDBDTableRowBaseWithId: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Id;

public:
	DATATABLEUTILITIES_API FDBDTableRowBaseWithId();
};

FORCEINLINE uint32 GetTypeHash(const FDBDTableRowBaseWithId) { return 0; }
