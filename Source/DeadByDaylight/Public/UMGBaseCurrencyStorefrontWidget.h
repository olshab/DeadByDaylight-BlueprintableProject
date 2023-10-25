#pragma once

#include "CoreMinimal.h"
#include "UMGBaseStorefrontWidget.h"
#include "UMGBaseCurrencyStorefrontWidget.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGBaseCurrencyStorefrontWidget : public UUMGBaseStorefrontWidget
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastOnAuricCellButtonClicked(int32 cellIndex);

public:
	UUMGBaseCurrencyStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseCurrencyStorefrontWidget) { return 0; }
