#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASPerspectiveTransform.generated.h"

USTRUCT(BlueprintType)
struct FASPerspectiveTransform
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector4 Row0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector4 Row1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector4 Row2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector4 Row3;

public:
	SCALEFORMUI_API FASPerspectiveTransform();
};

FORCEINLINE uint32 GetTypeHash(const FASPerspectiveTransform) { return 0; }
