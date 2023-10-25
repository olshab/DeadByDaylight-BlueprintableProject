#pragma once

#include "CoreMinimal.h"
#include "UMGCurrencyWidget.h"
#include "UMGAuricCellsButton.generated.h"

class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAuricCellsButton : public UUMGCurrencyWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PlusImage;

public:
	UUMGAuricCellsButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAuricCellsButton) { return 0; }
