#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "ECurrencyType.h"
#include "Styling/SlateColor.h"
#include "UMGCustomizationItemPriceWidget.generated.h"

class UTextBlock;
class UTexture2D;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGCustomizationItemPriceWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CurrencyValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* DiscountPercentageContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* DiscountPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CurrencyIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ECurrencyType, TSoftObjectPtr<UTexture2D>> CurrencyTextures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor AffordableCurrencyTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor AffordableSpecialCurrencyTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor NonAffordableCurrencyTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString _itemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECurrencyType _currencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasDiscountPercentage;

public:
	UUMGCustomizationItemPriceWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationItemPriceWidget) { return 0; }
