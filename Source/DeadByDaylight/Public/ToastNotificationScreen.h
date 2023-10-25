#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "ToastNotificationScreen.generated.h"

UCLASS(Blueprintable)
class UToastNotificationScreen : public UScreenBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void OnPromptSelected(int32 notificationId);

	UFUNCTION(BlueprintCallable)
	void OnNotificationDisplayEnd(int32 notificationId);

	UFUNCTION(BlueprintCallable)
	void OnButtonSelected(int32 buttonId, int32 notificationId);

public:
	UToastNotificationScreen();
};

FORCEINLINE uint32 GetTypeHash(const UToastNotificationScreen) { return 0; }
