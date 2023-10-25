#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "TextBlockOverrideProperties.generated.h"

USTRUCT(BlueprintType)
struct FTextBlockOverrideProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Opacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Size;

public:
	DBDUIVIEWSCORE_API FTextBlockOverrideProperties();
};

FORCEINLINE uint32 GetTypeHash(const FTextBlockOverrideProperties) { return 0; }
