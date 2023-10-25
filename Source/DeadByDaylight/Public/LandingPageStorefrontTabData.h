#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LandingPageStorefrontTabData.generated.h"

class UTexture2DDynamic;

USTRUCT(BlueprintType)
struct FLandingPageStorefrontTabData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Type;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime NewStartDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime NewEndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UTexture2DDynamic* Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText TagText;

public:
	DEADBYDAYLIGHT_API FLandingPageStorefrontTabData();
};

FORCEINLINE uint32 GetTypeHash(const FLandingPageStorefrontTabData) { return 0; }
