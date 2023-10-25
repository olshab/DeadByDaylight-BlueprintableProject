#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Styling/SlateColor.h"
#include "UMGBloodStoreTimer.generated.h"

class UTextBlock;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGBloodStoreTimer : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor _normalColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor _warningColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* RemainingTimeTextBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* RefreshImage;

public:
	UUMGBloodStoreTimer();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBloodStoreTimer) { return 0; }
