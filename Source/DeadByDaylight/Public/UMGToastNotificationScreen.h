#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGToastNotificationScreen.generated.h"

class UUMGBaseToastWidget;
class UVerticalBox;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGToastNotificationScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGBaseToastWidget> NotificationToast;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGBaseToastWidget> InvitationPartyToast;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* ToastsContainer;

private:
	UPROPERTY(EditAnywhere, Export)
	TMap<uint32, UUMGBaseToastWidget*> _toastsDisplayedOnScreen;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleOnPromptSelected(int32 notificationId);

	UFUNCTION(BlueprintCallable)
	void HandleOnNotificationDisplayEnd(int32 notificationId);

	UFUNCTION(BlueprintCallable)
	void HandleOnButtonSelected(int32 buttonId, int32 notificationId);

public:
	UUMGToastNotificationScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGToastNotificationScreen) { return 0; }
