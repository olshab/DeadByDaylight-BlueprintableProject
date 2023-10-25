#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "DBDTableRowBase.h"
#include "ECustomizationCategory.h"
#include "CustomizationCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationCategoryData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomizationCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

public:
	DEADBYDAYLIGHT_API FCustomizationCategoryData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationCategoryData) { return 0; }
