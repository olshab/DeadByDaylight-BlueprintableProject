#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ECurrencyType.h"
#include "CurrencyProgressionUIData.h"
#include "CurrencyUIDataRow.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyUIDataRow: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECurrencyType CurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCurrencyProgressionUIData CurrencyProgressionUIData;

public:
	DBDSHAREDTYPES_API FCurrencyUIDataRow();
};

FORCEINLINE uint32 GetTypeHash(const FCurrencyUIDataRow) { return 0; }
