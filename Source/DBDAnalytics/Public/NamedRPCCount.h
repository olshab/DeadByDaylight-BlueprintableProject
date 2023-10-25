#pragma once

#include "CoreMinimal.h"
#include "NamedRPCCount.generated.h"

USTRUCT(BlueprintType)
struct FNamedRPCCount
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Count;

public:
	DBDANALYTICS_API FNamedRPCCount();
};

FORCEINLINE uint32 GetTypeHash(const FNamedRPCCount) { return 0; }
