#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "ELoadoutType.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "FilterLoadoutData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFilterLoadoutData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EPlayerRole> Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ELoadoutType LoadoutType;

public:
	DEADBYDAYLIGHT_API FFilterLoadoutData();
};

FORCEINLINE uint32 GetTypeHash(const FFilterLoadoutData) { return 0; }
