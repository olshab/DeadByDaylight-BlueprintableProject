#pragma once

#include "CoreMinimal.h"
#include "AccessKey.generated.h"

USTRUCT(BlueprintType)
struct FAccessKey
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString KeyId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Key;

public:
	S3COMMAND_API FAccessKey();
};

FORCEINLINE uint32 GetTypeHash(const FAccessKey) { return 0; }
