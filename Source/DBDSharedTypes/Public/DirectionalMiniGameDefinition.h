#pragma once

#include "CoreMinimal.h"
#include "EDirectionalInputKey.h"
#include "EDirectionalMiniGameType.h"
#include "DirectionalMiniGameDefinition.generated.h"

USTRUCT(BlueprintType)
struct FDirectionalMiniGameDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 KeysPerSequenceCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSequenceRandom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EDirectionalInputKey> Sequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDirectionalMiniGameType Type;

public:
	DBDSHAREDTYPES_API FDirectionalMiniGameDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FDirectionalMiniGameDefinition) { return 0; }
