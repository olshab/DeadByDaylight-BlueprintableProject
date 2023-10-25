#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "MobileBaseUserWidget.h"
#include "UMGBaseButtonWidget.generated.h"

class UButton;
class UImage;
class UTextBlock;
class UAkAudioEvent;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGBaseButtonWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBaseButtonReleased);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBaseButtonPressed);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBaseButtonLongPress);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBaseButtonClicked);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnBaseButtonClicked OnBaseButtonClickedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnBaseButtonPressed OnBaseButtonPressedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnBaseButtonReleased OnBaseButtonReleasedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnBaseButtonLongPress OnBaseButtonLongPressEvent;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* Button;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* IconPicture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* ButtonLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush ButtonPictureBrush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ButtonText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* OnPressSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* OnClickSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* OnLongPressSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* OnReleaseSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* OnHoveredSound;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleButtonReleasedEvent();

	UFUNCTION(BlueprintCallable)
	void HandleButtonPressedEvent();

	UFUNCTION(BlueprintCallable)
	void HandleButtonLongPressEvent();

	UFUNCTION(BlueprintCallable)
	void HandleButtonHoveredEvent();

	UFUNCTION(BlueprintCallable)
	void HandleButtonClickedEvent();

public:
	UUMGBaseButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseButtonWidget) { return 0; }
