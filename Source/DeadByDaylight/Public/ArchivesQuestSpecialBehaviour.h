#pragma once

#include "CoreMinimal.h"
#include "ArchivesQuestSpecialBehaviour.generated.h"

USTRUCT(BlueprintType)
struct FArchivesQuestSpecialBehaviour
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Params;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Params_IsSet;

public:
	DEADBYDAYLIGHT_API FArchivesQuestSpecialBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesQuestSpecialBehaviour) { return 0; }
