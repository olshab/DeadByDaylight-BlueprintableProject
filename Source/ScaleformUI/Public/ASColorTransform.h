#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASColorTransform.generated.h"

USTRUCT(BlueprintType)
struct FASColorTransform
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Multiply;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Add;

public:
	SCALEFORMUI_API FASColorTransform();
};

FORCEINLINE uint32 GetTypeHash(const FASColorTransform) { return 0; }
