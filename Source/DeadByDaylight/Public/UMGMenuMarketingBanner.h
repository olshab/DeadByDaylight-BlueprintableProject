#pragma once

#include "CoreMinimal.h"
#include "UMGMenuBaseBanner.h"
#include "UMGMenuMarketingBanner.generated.h"

class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGMenuMarketingBanner : public UUMGMenuBaseBanner
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* SubTitle;

public:
	UUMGMenuMarketingBanner();
};

FORCEINLINE uint32 GetTypeHash(const UUMGMenuMarketingBanner) { return 0; }
