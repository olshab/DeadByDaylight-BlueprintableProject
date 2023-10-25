#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShopManager.generated.h"

class URecommendationsGenerator;
class UDBDGameInstance;
class UBannerDataProcessor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UShopManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBannerDataProcessor* _bannerDataProcessor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	URecommendationsGenerator* _recommendationsGenerator;

public:
	UShopManager();
};

FORCEINLINE uint32 GetTypeHash(const UShopManager) { return 0; }
