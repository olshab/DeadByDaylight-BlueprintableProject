#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EMainMenuButtonType.h"
#include "MainMenuButtonViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UMainMenuButtonViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IMainMenuButtonViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetNotificationVisibility(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetMainMenuButtonType(EMainMenuButtonType mainMenuButtonType);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	EMainMenuButtonType GetMainMenuButtonType();

};
