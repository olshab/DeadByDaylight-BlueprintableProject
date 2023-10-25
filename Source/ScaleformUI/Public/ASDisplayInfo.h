#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FASDisplayInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float XRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float YRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Alpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Visible;

public:
	SCALEFORMUI_API FASDisplayInfo();
};

FORCEINLINE uint32 GetTypeHash(const FASDisplayInfo) { return 0; }
