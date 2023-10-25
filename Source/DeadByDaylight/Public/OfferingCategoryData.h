#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "ItemUIData.h"
#include "DBDTableRowBase.h"
#include "EOfferingCategory.h"
#include "OfferingCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FOfferingCategoryData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOfferingCategory OfferingCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EPlayerRole> Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemUIData UIData;

public:
	DEADBYDAYLIGHT_API FOfferingCategoryData();
};

FORCEINLINE uint32 GetTypeHash(const FOfferingCategoryData) { return 0; }
