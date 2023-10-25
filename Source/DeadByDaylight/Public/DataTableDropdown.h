#pragma once

#include "CoreMinimal.h"
#include "DataTableDropdown.generated.h"

USTRUCT(BlueprintType)
struct FDataTableDropdown
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName RowValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FString DataTableName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FName ColumnName;

public:
	DEADBYDAYLIGHT_API FDataTableDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FDataTableDropdown) { return 0; }
