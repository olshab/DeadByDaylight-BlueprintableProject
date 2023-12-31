#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "CustomAnimData.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FCustomAnimData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UAnimInstance> MenuAnimationBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UAnimInstance> InGameAnimationBlueprint;

public:
	DEADBYDAYLIGHT_API FCustomAnimData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomAnimData) { return 0; }
