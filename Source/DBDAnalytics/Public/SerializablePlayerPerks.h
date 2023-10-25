#pragma once

#include "CoreMinimal.h"
#include "SerializablePlayerPerks.generated.h"

USTRUCT(BlueprintType)
struct FSerializablePlayerPerks
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, int32> Perks;

public:
	DBDANALYTICS_API FSerializablePlayerPerks();
};

FORCEINLINE uint32 GetTypeHash(const FSerializablePlayerPerks) { return 0; }
