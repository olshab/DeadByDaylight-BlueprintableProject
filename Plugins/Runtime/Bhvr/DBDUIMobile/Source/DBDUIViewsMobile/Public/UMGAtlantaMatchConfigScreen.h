#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaMatchConfigScreen.generated.h"

class UUMGBaseButtonWidget;
class UHorizontalBox;
class UUMGAtlantaMatchConfigPageScroll;
class UVerticalBox;
class UTextBlock;
class UMatchConfigTabsDataAsset;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGAtlantaMatchConfigScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGAtlantaMatchConfigPageScroll* MatchConfigPageScroll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* TabsBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UVerticalBox* BotsTabsBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* BackButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* MatchConfigTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* InventoryTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* SelectedTabTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMatchConfigTabsDataAsset* TabsDataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush SmallTabSeparation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush BigTabSeparation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TabsVerticalPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TabsHorizontalPadding;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleBackButtonClicked();

public:
	UUMGAtlantaMatchConfigScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaMatchConfigScreen) { return 0; }
