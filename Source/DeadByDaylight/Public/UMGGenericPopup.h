#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGGenericPopup.generated.h"

class URichTextBlock;
class UImage;
class UUMGPopupButton;
class UUMGHtmlRichText;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGGenericPopup : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	URichTextBlock* Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGHtmlRichText* Message;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* TitleBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* TitleSmoke;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGPopupButton* RegressionPopupButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGPopupButton* AlternativePopupButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGPopupButton* ProgressionPopupButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor ErrorTitleSmokeColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor ErrorTitleBackgroundColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor DefaultTitleSmokeColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor DefaultTitleBackgroundColor;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPopupDisappearance();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPopupAppearance();

public:
	UUMGGenericPopup();
};

FORCEINLINE uint32 GetTypeHash(const UUMGGenericPopup) { return 0; }
