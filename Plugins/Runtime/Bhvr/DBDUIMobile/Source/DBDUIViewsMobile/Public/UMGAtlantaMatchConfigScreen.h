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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGAtlantaMatchConfigPageScroll* MatchConfigPageScroll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* TabsBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* BotsTabsBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseButtonWidget* BackButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* MatchConfigTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* InventoryTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
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
