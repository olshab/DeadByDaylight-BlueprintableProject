#pragma once

#include "CoreMinimal.h"
#include "UMGBaseRootStorefrontWidget.h"
#include "UMGAtlRootStorefrontWidget.generated.h"

class UUMGCurrencyWidget;
class UUMGAuricCellsButton;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlRootStorefrontWidget : public UUMGBaseRootStorefrontWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCurrencyWidget* ShardWalletWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGAuricCellsButton* AuricWalletWidget;

public:
	UUMGAtlRootStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlRootStorefrontWidget) { return 0; }
