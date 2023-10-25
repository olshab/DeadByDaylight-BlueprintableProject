#pragma once

#include "CoreMinimal.h"
#include "EInputInteractionType.h"
#include "SecondaryInteractionProperties.generated.h"

USTRUCT(BlueprintType)
struct FSecondaryInteractionProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SecondaryInteractionID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputInteractionType SecondaryInteractionInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SecondaryInteractionDescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldShow;

public:
	DEADBYDAYLIGHT_API FSecondaryInteractionProperties();
};

FORCEINLINE uint32 GetTypeHash(const FSecondaryInteractionProperties) { return 0; }
