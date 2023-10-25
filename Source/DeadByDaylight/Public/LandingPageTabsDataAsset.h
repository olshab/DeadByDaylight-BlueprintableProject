#pragma once

#include "CoreMinimal.h"
#include "EStorefrontState.h"
#include "Engine/DataAsset.h"
#include "LandingPageTabData.h"
#include "LandingPageTabsDataAsset.generated.h"

UCLASS(Blueprintable)
class ULandingPageTabsDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EStorefrontState, FLandingPageTabData> BigButtonsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EStorefrontState, FLandingPageTabData> MediumButtonsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EStorefrontState, FLandingPageTabData> SmallButtonsData;

public:
	ULandingPageTabsDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const ULandingPageTabsDataAsset) { return 0; }
