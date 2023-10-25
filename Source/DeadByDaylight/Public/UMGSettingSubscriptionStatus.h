#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGSettingSubscriptionStatus.generated.h"

class UWidgetSwitcher;
class UHorizontalBox;
class UOverlay;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGSettingSubscriptionStatus : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SubscriptionStatusText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText StatusText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText InactiveStatusText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText EndText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* TypeSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* ActiveWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UOverlay* InactiveWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* StatusInactive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* End;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* EndDate;

public:
	UUMGSettingSubscriptionStatus();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingSubscriptionStatus) { return 0; }
