#pragma once

#include "CoreMinimal.h"
#include "ToastButton.generated.h"

USTRUCT(BlueprintType)
struct FToastButton
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ButtonText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsRegression;

public:
	DEADBYDAYLIGHT_API FToastButton();
};

FORCEINLINE uint32 GetTypeHash(const FToastButton) { return 0; }
