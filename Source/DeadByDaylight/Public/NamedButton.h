#pragma once

#include "CoreMinimal.h"
#include "NamedButton.generated.h"

USTRUCT(BlueprintType)
struct FNamedButton
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ClickCounter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DisplayName;

public:
	DEADBYDAYLIGHT_API FNamedButton();
};

FORCEINLINE uint32 GetTypeHash(const FNamedButton) { return 0; }
