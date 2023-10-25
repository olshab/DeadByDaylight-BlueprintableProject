#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "DataTableDropdown.h"
#include "CustomizedMeshPart.generated.h"

USTRUCT(BlueprintType)
struct FCustomizedMeshPart
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomizationCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableDropdown DefaultItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketName;

public:
	DEADBYDAYLIGHT_API FCustomizedMeshPart();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizedMeshPart) { return 0; }
