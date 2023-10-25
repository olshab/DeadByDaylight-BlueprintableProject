#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "MaterialReplacerData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialReplacerData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInterface> From;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInterface> To;

public:
	DEADBYDAYLIGHT_API FMaterialReplacerData();
};

FORCEINLINE uint32 GetTypeHash(const FMaterialReplacerData) { return 0; }
