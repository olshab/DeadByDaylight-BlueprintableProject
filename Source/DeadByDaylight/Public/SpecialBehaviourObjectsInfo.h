#pragma once

#include "CoreMinimal.h"
#include "SpecialBehaviourObjectsInfo.generated.h"

USTRUCT(BlueprintType)
struct FSpecialBehaviourObjectsInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SpecialBehaviourId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AmountRequired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TimesInteractedWith;

public:
	DEADBYDAYLIGHT_API FSpecialBehaviourObjectsInfo();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialBehaviourObjectsInfo) { return 0; }
