#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EOverlayTabs.h"
#include "SettingsViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API USettingsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ISettingsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetMenuState(EOverlayTabs state);

};
