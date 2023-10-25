#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "UObject/ScriptInterface.h"
#include "LandingPageTabData.generated.h"

class ISlateTextureAtlasInterface;

USTRUCT(BlueprintType)
struct FLandingPageTabData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DefaultText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TScriptInterface<ISlateTextureAtlasInterface> DefaultImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor BannerBackgroudColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsButtonEnabled;

public:
	DEADBYDAYLIGHT_API FLandingPageTabData();
};

FORCEINLINE uint32 GetTypeHash(const FLandingPageTabData) { return 0; }
