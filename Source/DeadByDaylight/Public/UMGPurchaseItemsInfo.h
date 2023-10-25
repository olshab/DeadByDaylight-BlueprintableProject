#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGPurchaseItemsInfo.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGPurchaseItemsInfo : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* Quantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* ItemName;

public:
	UUMGPurchaseItemsInfo();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPurchaseItemsInfo) { return 0; }
