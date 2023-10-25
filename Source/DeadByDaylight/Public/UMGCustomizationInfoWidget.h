#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGCustomizationInfoWidget.generated.h"

class UTexture2D;
class UImage;
class URichTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGCustomizationInfoWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* Background;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	URichTextBlock* InformationText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor BackgroundColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor TextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor IconColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> DefaultIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftObjectPtr<UTexture2D> KillerIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftObjectPtr<UTexture2D> SurvivorIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftObjectPtr<UTexture2D> BreakableIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftObjectPtr<UTexture2D> UnbreakableIcon;

public:
	UUMGCustomizationInfoWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationInfoWidget) { return 0; }
