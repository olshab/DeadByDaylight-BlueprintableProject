#pragma once

#include "CoreMinimal.h"
#include "DebugModelExtArchiveQuestSpecialBehaviours.generated.h"

USTRUCT(BlueprintType)
struct FDebugModelExtArchiveQuestSpecialBehaviours
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Params;

public:
	DEADBYDAYLIGHT_API FDebugModelExtArchiveQuestSpecialBehaviours();
};

FORCEINLINE uint32 GetTypeHash(const FDebugModelExtArchiveQuestSpecialBehaviours) { return 0; }
