#pragma once

#include "CoreMinimal.h"
#include "UMGAtlantaBaseEventsTemplate.h"
#include "UMGAtlantaBonusACEventTemplate.generated.h"

class UUMGAtlCurrencyStorefrontWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaBonusACEventTemplate : public UUMGAtlantaBaseEventsTemplate
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGAtlCurrencyStorefrontWidget* currencyStorefrontWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LastPackSmallIconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InitialSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AugmentedSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxNumberOfPacksToShowBigger;

public:
	UUMGAtlantaBonusACEventTemplate();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaBonusACEventTemplate) { return 0; }
