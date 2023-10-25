#pragma once

#include "CoreMinimal.h"
#include "SaveValidationData.generated.h"

USTRUCT(BlueprintType)
struct FSaveValidationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerUID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> CharacterData;

public:
	DEADBYDAYLIGHT_API FSaveValidationData();
};

FORCEINLINE uint32 GetTypeHash(const FSaveValidationData) { return 0; }
