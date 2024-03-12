#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EFlexibleTunableType.h"
#include "TypeFlexibleTunable.generated.h"

USTRUCT(BlueprintType)
struct FTypeFlexibleTunable: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFlexibleTunableType setType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _boolValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _floatValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _intValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString _stringValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> _arrayValue;

public:
	DBDSHAREDTYPES_API FTypeFlexibleTunable();
};

FORCEINLINE uint32 GetTypeHash(const FTypeFlexibleTunable) { return 0; }
