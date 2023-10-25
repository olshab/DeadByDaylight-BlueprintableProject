#pragma once

#include "CoreMinimal.h"
#include "EEventItemContentType.h"
#include "Styling/SlateColor.h"
#include "UObject/SoftObjectPtr.h"
#include "EventItemsContentTypeUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FEventItemsContentTypeUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEventItemContentType ContentType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool NeedRemoveRarityBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseDefaultRarityBackgroundColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor DefaultRarityBackgroundColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftObjectPtr<UTexture2D> BackgroundTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftObjectPtr<UTexture2D> RarityBackgroundTexture;

public:
	DEADBYDAYLIGHT_API FEventItemsContentTypeUIData();
};

FORCEINLINE uint32 GetTypeHash(const FEventItemsContentTypeUIData) { return 0; }
