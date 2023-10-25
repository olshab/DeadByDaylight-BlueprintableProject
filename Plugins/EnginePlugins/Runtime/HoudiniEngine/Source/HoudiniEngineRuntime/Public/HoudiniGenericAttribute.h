#pragma once

#include "CoreMinimal.h"
#include "EAttribStorageType.h"
#include "EAttribOwner.h"
#include "HoudiniGenericAttribute.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniGenericAttribute
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AttributeName;

	UPROPERTY(EditAnywhere)
	EAttribStorageType AttributeType;

	UPROPERTY(EditAnywhere)
	EAttribOwner AttributeOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AttributeCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AttributeTupleSize;

	UPROPERTY(EditAnywhere)
	TArray<double> DoubleValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int64> IntValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> StringValues;

public:
	HOUDINIENGINERUNTIME_API FHoudiniGenericAttribute();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniGenericAttribute) { return 0; }
